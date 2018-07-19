//
// Created by 吴宗刚 on 2018/7/19.
//

#ifndef LEARNCPP_ONTOUCHEVENTLISTENER_H
#define LEARNCPP_ONTOUCHEVENTLISTENER_H

#include <functional>

using namespace std;

class OnTouchEventListener {

public:

    typedef function<void()> OnTouchBegin;
    typedef function<void()> OnTouchEnd;

    OnTouchBegin onTouchBegin;
    OnTouchEnd onTouchEnd;

};


#endif //LEARNCPP_ONTOUCHEVENTLISTENER_H
