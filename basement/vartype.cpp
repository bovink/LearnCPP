//
// Created by 吴宗刚 on 2019/1/7.
//

#include <iostream>

using namespace std;

void testInitVar() {
    // 整型
    int i = 1;
    long l = 1;
    short s = 1;

    // 浮点型
    float f = 0.1;
    double d = 0.1;

    // 布尔型
    bool b = true;

    // 字符型
    char c = 'a';
}

void testPointer() {

    int i = 1;
    int *pi = &i;
    int **ppi = &pi;

    int **newppi = ppi;

    **newppi = 2;

    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;

    **ppi = 3;
    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;

    *pi = 4;
    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;

    i = 5;

    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;

}

int main() {
    testPointer();
    return 0;
}
