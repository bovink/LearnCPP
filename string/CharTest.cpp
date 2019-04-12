//
// Created by 吴宗刚 on 2019-03-29.
//

#include <iostream>
#include "Func.h"

using namespace std;

char a = 'a';
char b = 'b';
// 可以改变指针，但不能改变指针指向的值
// const char*与char const*是一样的
// 把a的地址赋值给ptr1，*ptr1指向a的值，由于*ptr1添加const关键字，所以不能再给其赋值
const char *ptr1 = &a;
// 可以改变指针指向的值，但不能改变指针
// 把a的地址赋值给ptr2，因为ptr2添加了const关键字，所以不能再给ptr2赋值
char *const ptr2 = &a;

void print(char c) {
    cout << c << endl;
}

int main() {
    print(*ptr1);
    print(*ptr2);

    *ptr2 = b;
//    ptr2 = &b;

    ptr1 = &b;
//    *ptr1 = b;
    print(*ptr1);
    print(*ptr2);

    testFunc();
    testStaticFunc();
    return 0;
}

