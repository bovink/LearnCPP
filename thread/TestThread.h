//
// Created by 吴宗刚 on 2018/12/11.
//

#ifndef LEARNCPP_TESTTHREAD_H
#define LEARNCPP_TESTTHREAD_H

#include <string>
#include <iostream>
#include <thread>

using namespace std;

class TestThread {

public:

    TestThread(string name);

    void startThread();

    void startThreadB();

    void print(string s);

    void printB();

private:
    string name;
    int n = 0;
};


#endif //LEARNCPP_TESTTHREAD_H
