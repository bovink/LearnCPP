//
// Created by 吴宗刚 on 2019/1/25.
//

#include "StringTest.h"

int main() {

    auto test = new StringTest();
    test->print("a");
    test->getLength();
    test->stringToInt();
}


void StringTest::print(string s) {

    cout << s << endl;
}

void StringTest::getLength() {

    string s = "hello";
    auto len = strlen(s.c_str());
    cout << "length is " << len << endl;
}

void StringTest::stringToInt() {

    string s = "10";
    auto i = stoi(s);
    cout << "int is " << i << endl;
}

void StringTest::intToString() {

    int i = 10;
    string s = to_string(i);
    cout << s << endl;
}
