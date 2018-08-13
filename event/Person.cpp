//
// Created by 吴宗刚 on 2018/8/13.
//

#include "Person.h"
#include "ClickEvent.h"


void Person::clickKeyboard() {

    _handler.performKeyboardEvent();
}

Person::Person(EventHandler handler) {

    _handler = handler;
}

