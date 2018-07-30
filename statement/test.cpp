//
// Created by 吴宗刚 on 2018/7/17.
//

#include <iostream>
#include "Activity.h"
#include "OnTouchEventListener.h"

using namespace std;

void testWhile() {

}

void testIf() {

}

void testFor() {

}

void testDoWhile() {

    int i = 0;
    do {
        if (i == 9) {
            break;
        }
        cout << i << endl;
        i++;
    } while (i < 10);

    cout << "end" << endl;
}

//int main() {
//
//    testDoWhile();
//    auto listener = new OnTouchEventListener();
//    listener->onTouchBegin = []() {
//        cout << "touch begin" << endl;
//    };
//
//    listener->onTouchEnd = []() {
//
//        cout << "touch end" << endl;
//    };
//
//
//    auto act = new Activity();
//    act->setTouchListener(listener);
//    act->touch();
//    return 0;
//}
