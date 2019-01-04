//
// Created by 吴宗刚 on 2018/12/28.
//

#include "Director.h"

Director *Director::s_director = nullptr;

Director::Director() {

}

Director *Director::getInstance() {
    if (s_director == nullptr) {
        s_director = new Director();
    }
    return s_director;
}

void Director::changeValue(int **pInt) {

    chane(pInt);
}

void Director::chane(int **pInt) {

    **pInt = 0;
}

void Director::changeValue(int *pInt) {
    *pInt = 111;
}


