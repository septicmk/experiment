#include <iostream>
using namespace std;

struct C{
    C(){
        cout << "cons" << endl;
    }
    C(const C&){
        cout << "copy" << endl;
    }
    //C(C &&c){
        //cout << "move" <<endl;
    //}

    ~C(){
        cout << "decons" << endl;
    }
};

C f(){
    auto x = C();
    return x;
}

int main(){
    cout << "hello world" << endl;
    cout << "--------" << endl;
    C obj = f();
    cout << "--------" << endl;
    return 0;
}
