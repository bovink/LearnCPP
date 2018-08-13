//
// Created by 吴宗刚 on 2018/8/13.
//

#ifndef LEARNCPP_KEYBOARD_H
#define LEARNCPP_KEYBOARD_H

#include "EventHandler.h"

class Keyboard : public Event {
public:
    void perform() override;

};


#endif //LEARNCPP_KEYBOARD_H
