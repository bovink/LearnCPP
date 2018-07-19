//
// Created by 吴宗刚 on 2018/7/19.
//

#include "Activity.h"

void Activity::setTouchListener(OnTouchEventListener *listener) {

    _listener = listener;
}

void Activity::touch() {

    if (_listener) {
        _listener->onTouchBegin();
        _listener->onTouchEnd();
    }
}
