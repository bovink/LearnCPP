//
// Created by 吴宗刚 on 2019/1/25.
//

#include <vector>
#include "StringTest.h"

int main() {

    auto test = new StringTest();
    test->generateString();
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

void StringTest::generateString() {

    vector<char> content;
    content.push_back('h');
    content.push_back('e');
    content.push_back('l');
    content.push_back('l');
    content.push_back('o');
    string s1(content.begin(), content.end());
    print(s1);

    char chars[] = "world";
    string s2 = chars;
    print(s2);
}
