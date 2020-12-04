//
// Created by Bovink on 2020/12/4.
//

#ifndef LEARNCPP_ITERATOR_H
#define LEARNCPP_ITERATOR_H

#include "std_lib_facilities.h"

template<class T>
class Iterator {

public:
    virtual bool hasNext() = 0;

    virtual T next() = 0;
};


class Unit {

public:
    enum UnitType {
        None,
        Watch,
        Activity,
        Sing
    };

    Unit();

    UnitType getType() const;

    void setType(UnitType type);

private:
    UnitType type;
};

class UnitIterator : public Iterator<Unit> {
public:
    UnitIterator(const vector<Unit> &units);

    bool hasNext() override;

    Unit next() override;

private:
    vector<Unit> units;
    int currentIndex;
};



#endif //LEARNCPP_ITERATOR_H
