//
// Created by 吴宗刚 on 2018/8/13.
//

#include "EventHandler.h"


Event::Event() {

}

void EventHandler::performEvent(Event* e) {

    e->perform();
}
