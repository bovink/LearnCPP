//
// Created by 吴宗刚 on 2019-03-29.
//

#include <iostream>

using namespace std;

char a = 'a';
char b = 'b';
// 可以改变指针，但不能改变指针指向的值
// const char*与char const*是一样的
const char *ptr1 = &a;
// 可以改变指针指向的值，但不能改变指针
char *const ptr2 = &a;

void print(char c) {
    cout << c << endl;
}

int main() {
    print(*ptr1);
    print(*ptr2);

    ptr1 = &b;

    *ptr2 = b;
    print(*ptr1);
    print(*ptr2);

    return 0;
}

