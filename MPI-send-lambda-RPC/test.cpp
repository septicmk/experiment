#include <iostream>
#include <cstdio>
#include <cstring>
#include <mpi.h>
using namespace std;

using Des=void (*)(char *);

template< typename T >
class Message{
private:
    T storage_;
public:
    inline Message( T t ): storage_( t ){}

    static void deserialize_and_call( char * t ){
        T * obj = reinterpret_cast< T * >( t );
        (*obj)();
    }

    int serialize_to( char *p ){
        int cnt = 0;
        *(reinterpret_cast<Des *>(p)) = &deserialize_and_call;
        char * xp = p + sizeof( &deserialize_and_call );
        cnt += sizeof(&deserialize_and_call);
        memcpy(xp, &storage_, sizeof(storage_));
        cnt += sizeof(storage_);
        return cnt;
    }
};

template<typename T>
Message<T>* send_message(T t){
    auto x = new Message<T>(t);
    return x;
}


int main(int argc, char* argv[]){
    MPI_Init(&argc, &argv);
    int rank,size;
    MPI_Status state;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    char data[128];
    int cnt;
    if( 0 == rank ){
        for(int i = 1 ; i < size ; ++ i){
            auto x = send_message([i]{printf("hello rank %d\n",i);});
            x->serialize_to(data);
            MPI_Send(data, 128, MPI_CHAR, i, 0, MPI_COMM_WORLD);
        }
    }else{
        MPI_Recv(data, 128, MPI_CHAR, 0, 0, MPI_COMM_WORLD, &state);
        auto fp = reinterpret_cast<Des *>(data);
        (*fp)( (char*)(fp+1) );
    }
    MPI_Finalize();
    return 0;
}

