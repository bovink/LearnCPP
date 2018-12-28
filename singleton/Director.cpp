//
// Created by 吴宗刚 on 2018/12/28.
//

#include "Director.h"


Director::Director() {

}

Director *Director::getInstance() {
    if (s_director == nullptr) {
        s_director = new Director();
    }
    return s_director;
}
