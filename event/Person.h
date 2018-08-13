//
// Created by 吴宗刚 on 2018/8/13.
//

#ifndef LEARNCPP_PERSON_H
#define LEARNCPP_PERSON_H

#include "EventHandler.h"

class Person {

public:

    Person(EventHandler handler);


    void clickKeyboard();

private:
    EventHandler _handler;
};


#endif //LEARNCPP_PERSON_H
