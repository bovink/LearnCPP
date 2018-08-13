//
// Created by 吴宗刚 on 2018/8/13.
//

#include "Person.h"
#include "ClickEvent.h"

void Person::init() {

    handler = EventHandler();
}

void Person::click() {

    auto event = new ClickEvent();
    handler.performEvent(event);
}
