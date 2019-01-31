//
// Created by 吴宗刚 on 2018/7/30.
//

#include <iostream>
#include "json.hpp"
#include "Date.h"
#include "Model.h"
#include "Person.h"

using json = nlohmann::json;
using namespace std;

void testDate() {

    json jdate;
    jdate["today"] = "hello";

    json j;

    j["type"] = 0;
    j["model"] = jdate;

    cout << j << endl;
    model::Model model = j;
    date::Date d = *static_cast<date::Date *>(model.getModel());
    cout << d.getToday() << endl;
}
void testPerson() {

    json jperson;
    jperson["age"] = 10;

    json j;

    j["type"] = 1;
    j["model"] = jperson;

    cout << j << endl;
    model::Model model = j;
    person::Person p = *static_cast<person::Person *>(model.getModel());
    cout << p.getAge() << endl;
}

int main() {

    return 0;
}
