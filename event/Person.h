//
// Created by 吴宗刚 on 2018/8/13.
//

#ifndef LEARNCPP_PERSON_H
#define LEARNCPP_PERSON_H

#include "EventHandler.h"

class Person {

public:

    void init();

    void click();

private:
    EventHandler handler;
};


#endif //LEARNCPP_PERSON_H
