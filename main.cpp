#include <iostream>
#include <string>
#include <map>
#include "set/tester_map.h"

using namespace std;

int main() {

    auto test = new tester_map();
    test->addData();
    test->findData();
    test->printAllKey();
    return 0;
}