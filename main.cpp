#include <iostream>
#include "event/Person.h"
#include "event/Keyboard.h"
#include "event/ClickEvent.h"

int main() {
    auto keyboard = new Keyboard();
    auto clickEvent = new ClickEvent();

    EventHandler handler = EventHandler();

    handler.subscribeEvent(keyboard);
    handler.subscribeEvent(clickEvent);

    handler.notify();

    handler.unsubscribeEvent(keyboard);
    handler.notify();
    return 0;
}