#include <iostream>

#include "thread/TestThread.h"

using namespace std;
static const int num_threads = 10;

void call_from_thread(int i) {
//    std::cout << "Hello, World:\n" ;
    cout << i << "\n";
}

int main() {
    thread t[num_threads];
    for (int i = 0; i < num_threads; ++i) {
        t[i] = thread(call_from_thread, i);
    }

    cout << "Launched from main thread\n";

    for (int j = 0; j < num_threads; ++j) {
        t[j].join();
    }

//    auto test = TestThread("测试");
//    test.startThread();

    return 0;
}