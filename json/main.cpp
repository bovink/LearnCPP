//
// Created by 吴宗刚 on 2018/7/30.
//

#include <iostream>
#include "json.hpp"
#include "Date.h"
#include "Person.h"

using json = nlohmann::json;
using namespace std;

int main(){

    json j;

//    j["age"] = 13;
    j["today"] = "hello";

//    person::Person p = j;
    date::Date d = j;

//    cout << p.getAge() << endl;
    cout << d.getToday() << endl;


    return 0;
}
