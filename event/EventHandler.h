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

    void performEvent(Event* e);
//
//    void subscribeEvnet(Event e);
//
//    void unsubscribeEvent(Event e);

private:

    vector<Event> clickEvents;
};

class Event {
public:
    Event();

    virtual void perform() = 0;
};


#endif //LEARNCPP_EVENTHANDLER_H
