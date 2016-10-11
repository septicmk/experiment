
#include <cstdio>
#include <iostream>
#include <mpi.h>
#include <cstring>

using namespace std;

int f1(int a){return a + 1;}
int f2(int a){return a + 2;}
int f3(int a){return a + 3;}

using F=int (*)(int);

class Seg{
public:
    void * d;
    int data;
};

int main(int argc, char *argv[]){
    MPI_Init(&argc, &argv);
    int rank, size;
    MPI_Status state;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    //test 1
    Seg *s = new Seg();
    s->data = 0;
    s->d = (void *)(&f1);
    printf("%x %x %x\n",&f1,&f2,&f3);

    //test 2
    char data[10];
    if(rank == 0){
        *(reinterpret_cast<F*>(data))=&f1;
        MPI_Send(data, 8, MPI_CHAR, 1, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 2, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 3, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 4, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 5, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 6, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 7, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 8, 0, MPI_COMM_WORLD);
        MPI_Send(data, 8, MPI_CHAR, 9, 0, MPI_COMM_WORLD);
    }else{
        MPI_Recv(data, 8, MPI_CHAR, 0, 0, MPI_COMM_WORLD, &state);
        F* fp = reinterpret_cast<F*>(data);
        int ans = (**fp)(10);
        cout << ans << endl;
    }
    
    
    MPI_Finalize();
    return 0;
}

