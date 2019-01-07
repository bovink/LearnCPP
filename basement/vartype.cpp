//
// Created by 吴宗刚 on 2019/1/7.
//

#include "vartype.h"
#include <iostream>

using namespace std;
class person {

public:
    char* name;

    void setName(char names[]);

public:

    void printName();
};


void person::setName(char names[]) {

    name = names;
}

void person::printName() {

    cout << *name << endl;
}

int main() {

    auto p = new person();
    char n[] = "aaa";
    p->setName(n);
    p->printName();

    return 0;
}
