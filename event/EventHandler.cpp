//
// Created by 吴宗刚 on 2018/8/13.
//

#include "EventHandler.h"


void EventHandler::subscribeEvent(Event *e) {

    clickEvents.push_back(e);
}

void EventHandler::notify() {

    for (int i = 0; i < clickEvents.size(); ++i) {
        clickEvents.at(i)->perform();
    }
}

void EventHandler::unsubscribeEvent(Event *e) {

    clickEvents.erase(remove(clickEvents.begin(), clickEvents.end(), e), clickEvents.end());

}
