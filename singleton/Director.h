//
// Created by 吴宗刚 on 2018/12/28.
//

#ifndef LEARNCPP_DIRECTOR_H
#define LEARNCPP_DIRECTOR_H


class Director {

private:
    Director();

    static Director* s_director;
public:
    static Director *getInstance();

};


#endif //LEARNCPP_DIRECTOR_H
