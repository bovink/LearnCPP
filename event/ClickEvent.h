//
// Created by 吴宗刚 on 2018/8/13.
//

#ifndef LEARNCPP_CLICKEVENT_H
#define LEARNCPP_CLICKEVENT_H

#include "EventHandler.h"

class ClickEvent : public Event {
public:
    void perform() override;
};


#endif //LEARNCPP_CLICKEVENT_H
