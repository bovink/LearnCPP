//
// Created by 吴宗刚 on 2018/7/30.
//

#ifndef LEARNCPP_PERSON_H
#define LEARNCPP_PERSON_H


#include <string>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

namespace person {

    class Person {

    public:
        int getAge() const;

        void setAge(int age);

    private:
        int age;
    };

    void to_json(json &j, const Person &m);

    void from_json(const json &j, Person &m);
}


#endif //LEARNCPP_PERSON_H
