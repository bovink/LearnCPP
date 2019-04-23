//
// Created by 吴宗刚 on 2019/1/25.
//

#include <vector>
#include "StringTest.h"
#include "Func.h"


std::vector<std::string> split_chinese(std::string s) {
    std::vector<std::string> t;
    for (size_t i = 0; i < s.length();) {
        int cplen = 1;
        // 以下的几个if，要参考这里 https://en.wikipedia.org/wiki/UTF-8#Description
        if ((s[i] & 0xf8) == 0xf0)      // 11111000, 11110000
            cplen = 4;
        else if ((s[i] & 0xf0) == 0xe0) // 11100000
            cplen = 3;
        else if ((s[i] & 0xe0) == 0xc0) // 11000000
            cplen = 2;
        if ((i + cplen) > s.length())
            cplen = 1;
        t.push_back(s.substr(i, cplen));
        i += cplen;
    }
    return t;
}

int main() {

//    auto test = new StringTest();
//    test->toLowerCase();
//    testFunc();


    std::string s = "这是一组中文";
    std::vector<std::string> t = split_chinese(s);
    for (auto a : t) {
        std::cout << a << std::endl;
    }
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

void StringTest::toLowerCase() {

    string s = "BIG";
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;

}

