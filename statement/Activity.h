//
// Created by 吴宗刚 on 2018/7/19.
//

#ifndef LEARNCPP_ACTIVITY_H
#define LEARNCPP_ACTIVITY_H

#include "OnTouchEventListener.h"

class Activity {

public:

    void setTouchListener(OnTouchEventListener *listener);

    void touch();

private:

    OnTouchEventListener *_listener;
};


#endif //LEARNCPP_ACTIVITY_H
