#include <iostream>
#include "event/Person.h"
#include "event/Keyboard.h"

int main() {
    EventHandler handler = EventHandler();


    auto keyboard =new  Keyboard();
    handler.subscribeEvent(keyboard);

    handler.notify();
    return 0;
}