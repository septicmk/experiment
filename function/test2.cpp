#include <iostream>
#include <cstdio>
#include <cstdint>

using namespace std;



template < typename TF > 
void issue_task(TF tf){
    //uint64_t args[3];
    //new(reinterpret_cast<TF*>(&args[0])) TF(tf);
    //TF *tp = reinterpret_cast<TF *>(&args[0]);
    tf();
}


int main(){
    int x = 19;
    issue_task([x]{printf("hello %d\n",x);});
    return 0;
}
