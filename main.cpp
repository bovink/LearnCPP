#include <iostream>

#include "thread/TestThread.h"
#include "singleton/Director.h"

using namespace std;
static const int num_threads = 10;

void call_another() {
    for (int i = 0; i < 10; ++i) {

        cout << "other" << endl;
        std::chrono::milliseconds duration(1000);
        this_thread::sleep_for(duration);
    }
}

void call_from_thread() {
    thread t = thread(call_another);
    t.detach();

    for (int i = 0; i < 10; ++i) {

        cout << i << endl;
        std::chrono::milliseconds duration(1000);
        this_thread::sleep_for(duration);
    }

}


int main() {
//    thread t = thread(call_from_thread);
//    t.join();
//    cout << "Launched from main thread\n";

    auto dir = Director::getInstance();

    int i = 10;

    int *pInt = &i;

    int **pInt1 = &pInt;

    dir->changeValue(*pInt1);

    cout << i << endl;
    cout << *pInt << endl;
    cout << **pInt1 << endl;


    return 0;
}