#include <iostream>
#include <string>
#include <map>
#include "set/tester_map.h"

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
    map<string, string> image_map;
    image_map["test"] = "aaa";

    auto find = image_map.find("test");
    if (find == image_map.end()) {

        cout << "不存在"  <<endl;
    } else {

        cout << "存在"  <<endl;
        cout << image_map["test"] <<endl;
    }
    return 0;
}