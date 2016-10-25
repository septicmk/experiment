#include <iostream>
#include <thread>
#include <string>
using namespace std;

class T{
public:
    string x;
    void hello(){
        x = string{"hi"};
    }
};

int main(){
    auto w = new T();
    //thread t{w->hello};
    thread t(&T::hello, w);
    t.join();
    cout << w->x << endl;
    return 0;
}
