//
// Created by 吴宗刚 on 2018/7/30.
//

#include "Person.h"

int person::Person::getAge() const {
    return age;
}

void person::Person::setAge(int age) {
    Person::age = age;
}

void person::to_json(json &j, const person::Person &m) {

    j = json{
            {"age", m.getAge()}
    };
}

void person::from_json(const json &j, person::Person &m) {


    m.setAge(j.at("age").get<int>());
}
