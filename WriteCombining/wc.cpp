#include <chrono>
#include <iostream>
#include <limits>
using namespace std;


const int ITERATIONS = numeric_limits<int>::max();
const int ITEMS = 1<<24;
const int MASK = ITEMS - 1;

char A[ITEMS];
char B[ITEMS];
char C[ITEMS];
char D[ITEMS];
char E[ITEMS];
char F[ITEMS];

template <typename T>
void time_func(T t, const char* msg){
    auto start = chrono::high_resolution_clock::now();
    t();
    auto finish = chrono::high_resolution_clock::now();
    cout << msg << chrono::duration_cast<chrono::nanoseconds>(finish-start).count() << endl;
}

void case_one(){
    int t = ITERATIONS;
    while( --t ){
        int slot = t & MASK;
        char x = (char)t;
        A[slot] = x;
        B[slot] = x;
        C[slot] = x;
        D[slot] = x;
        E[slot] = x;
        F[slot] = x;
    }
}

void case_two(){
    int t = ITERATIONS;
    while( --t ){
        int slot = t & MASK;
        char x = (char)t;
        A[slot] = x;
        B[slot] = x;
        C[slot] = x;
    }

    t = ITERATIONS;
    while( --t ){
        int slot = t & MASK;
        char x = (char)t;
        D[slot] = x;
        E[slot] = x;
        F[slot] = x;
    }
}



int main(){

    time_func(case_two, "case two: ");
    time_func(case_one, "case one: ");
    return 0;
}
