//
// Created by 吴宗刚 on 2019-09-30.
//

#include "tester_map.h"
#include <iostream>

using namespace std;

tester_map::tester_map() {}

void tester_map::createMap() {

}

void tester_map::addData() {

    person_info["address"] = "china";
    person_info["name"] = "lilei";
    person_info["age"] = "18";
    person_info["sex"] = "male";
}

void tester_map::findData() {
    auto find = person_info.find("name");
    if (find == person_info.end()) {

        cout << "不存在" << endl;
    } else {

        cout << "存在" << endl;
    }

    if (person_info.empty()) {
        cout << "空容器" << endl;
    }

}

void tester_map::deleteData() {

}

void tester_map::printAllData() {

}

void tester_map::printAllKey() {

    for (auto iter = person_info.begin(); iter != person_info.end(); iter++) {

        cout << iter->first << endl;
        cout << iter->second << endl;
    }


}

void tester_map::printAllValue() {

}
