//
// Created by 吴宗刚 on 2018/7/19.
//

#ifndef LEARNCPP_CLICKEVENT_H
#define LEARNCPP_CLICKEVENT_H


#include <string>
#include <functional>

using namespace std;

class ClickEvent {

public:

    typedef function<void(string &)> ClickCallback;

public:

    void setClickCallback(const ClickCallback &clickCallback);

    void doSomething(string &s);


private:

    ClickCallback _callback;

};


#endif //LEARNCPP_CLICKEVENT_H
