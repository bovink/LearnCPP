//
// Created by 吴宗刚 on 2018/7/19.
//

#include "ClickEvent.h"

void ClickEvent::setClickCallback(const ClickEvent::ClickCallback &clickCallback) {

    _callback = clickCallback;
}

void ClickEvent::doSomething(string &s) {

    if (_callback) {
        _callback(s);
    }
}
