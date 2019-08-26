//
// Created by 吴宗刚 on 2019-08-26.
//

#include "VectorTest.h"
#include <iostream>

void VectorTest::printVector() {

    for (auto s :strings) {
        cout << s << endl;
    }
}

void VectorTest::insertString(string s) {
    strings.push_back(s);

}

void VectorTest::removeString(string s) {

    auto iter = find(strings.begin(), strings.end(), s);
    if (iter != strings.end()) {

        strings.erase(iter);
    } else {
        cout << "不存在" << endl;
    }
}

void VectorTest::modifyString(int index) {

}

void VectorTest::queryString(string s) {

}
