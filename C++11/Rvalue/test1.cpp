#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

template <typename T>
T _max(T x, T y){
    return x > y ? x : y;
}

template <>
char _max(char x, char y){
    return x < y ? x : y;
}

int main(){
    cout << _max('a','b') << endl;
    cout << _max(1 , 2) << endl;
    int x = 0;
    //int &&y= x;
    cout << x << endl;
    
    return 0;
}
