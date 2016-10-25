#include <iostream>
#include <cstdio>
#include <cstdint>
using namespace std;

//using F=void (*)(uint32_t);
void func(char a, char b, char c, char d){
    printf("%d %d %d %d\n",a,b,c,d);
    cout << a << b << c << d << endl;
}

int main(){
   void (*f)(uint64_t);
   void (*p)(char,char,char,char);
   //F* f = reinterpret_cast<F*>(&func);
   f = (void (*)(uint64_t))&func;
   p = &func;
   uint64_t x= (uint64_t)('a') << 24 ;
   x |= (uint64_t)('b') << 16 ;
   x |= (uint64_t)('c') << 8 ;
   x |= (uint64_t)('d');
   //(*p)('a','b','c','d');
   (*f)(x);
   return 0;
}
