//
// Created by 吴宗刚 on 2018/7/17.
//

#include <iostream>

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

int main() {

    testDoWhile();
    return 0;
}
