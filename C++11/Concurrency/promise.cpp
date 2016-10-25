#include <iostream>
#include <future>
#include <thread>

using namespace std;

promise<string> val;

static void test(){
    thread ta([]{
                future<string> fu = val.get_future();
                cout << "waiting promise" << endl;
                cout << fu.get() << endl;
                cout << "Yes i see it" << endl;
            });

    thread tb([]{
                this_thread::sleep_for( chrono::milliseconds(100) );
                val.set_value("promise is realised!");
            });
    ta.join();
    tb.join();
}

int main(){
    test();
    return 0;
}
