#include <iostream>
#include "event/Person.h"
#include "event/Keyboard.h"

int main() {
    EventHandler handler = EventHandler();


    auto keyboard =new  Keyboard();
    handler.subscribeEvent(keyboard);

    Person person = Person(handler);
    person.clickKeyboard();
    return 0;
}