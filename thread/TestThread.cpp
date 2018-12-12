//
// Created by 吴宗刚 on 2018/12/11.
//

#include "TestThread.h"


void TestThread::startThread() {

    string s = "测试a";
    thread t1(&TestThread::print,this,s);
    thread t2(&TestThread::printB,this);

    t1.join();
    t2.join();
}

TestThread::TestThread(string name) {
    this->name = name;

}

void TestThread::print(string s) {

    for (int i = 0; i < 10; ++i) {

        n++;
        cout << s << n << endl;
//        std::chrono::milliseconds duration(1000);
//        this_thread::sleep_for(duration);
    }

}

void TestThread::startThreadB() {

    thread t1(&TestThread::printB, this);
    t1.join();
}

void TestThread::printB() {

    for (int i = 0; i < 10; ++i) {
        cout << "搜索" << i << endl;
//        std::chrono::milliseconds duration(1000);
//        this_thread::sleep_for(duration);
    }
}
