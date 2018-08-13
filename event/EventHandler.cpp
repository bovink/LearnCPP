//
// Created by 吴宗刚 on 2018/8/13.
//

#include "EventHandler.h"


Event::Event() {

}


void EventHandler::performKeyboardEvent() {

    for (int i = 0; i < clickEvents.size(); ++i) {
        clickEvents.at(i)->perform();
    }
}

void EventHandler::subscribeEvent(Event *e) {

    clickEvents.push_back(e);
}
