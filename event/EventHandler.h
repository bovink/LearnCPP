//
// Created by 吴宗刚 on 2018/8/13.
//

#ifndef LEARNCPP_EVENTHANDLER_H
#define LEARNCPP_EVENTHANDLER_H


#include <vector>

using namespace std;

class Event;

class EventHandler {

public:


    void subscribeEvent(Event *e);

    void unsubscribeEvent(Event *e);

    void notify();

private:

    vector<Event *> clickEvents;
};

class Event {
public:

    virtual void perform() = 0;
};


#endif //LEARNCPP_EVENTHANDLER_H
