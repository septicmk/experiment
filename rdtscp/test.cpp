#include <cstdint>
#include <iostream>
#include <mpi.h>

inline uint64_t perf_start(){
    uint32_t lo, hi;
    asm volatile (
        "CPUID\n\t"
        "RDTSC\n\t"
        "mov %%edx, %0\n\t" 
        "mov %%eax, %1\n\t" 
        : "=r"(hi),"=r"(lo)
        ::"%rax","%rbx","%rcx","%rdx"
    );
    return ((uint64_t)lo) | (((uint64_t)hi) << 32);
}

inline uint64_t perf_stop(){
    uint32_t lo, hi;
    asm volatile (
        "RDTSCP\n\t"
        "mov %%edx, %0\n\t"
        "mov %%eax, %1\n\t"
        "CPUID\n\t"
        : "=r"(hi), "=r"(lo)
        :: "%rax", "%rbx", "%rcx", "%rdx"
    );
    return ((uint64_t)lo) | (((uint64_t)hi) << 32);
}

int main(int argc, char *argv[]){
    MPI_Init(&argc ,&argv);
    uint64_t t1 = perf_start();
//#pragma loop_opt(on)
    //for(int i = 0 ; i < 100; i++) int x = 100;
//#pragma loop_opt(on)
    uint64_t t2 = perf_stop();
    std::cout << t2 - t1 << std::endl;
    MPI_Finalize();
    return 0;
}
