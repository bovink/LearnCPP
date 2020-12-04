//
// Created by Bovink on 2020/12/4.
//

#include "iterator.h"

Unit::UnitType Unit::getType() const {
    return type;
}

void Unit::setType(Unit::UnitType type) {
    Unit::type = type;
}

Unit::Unit() : type(UnitType::None) {}

bool UnitIterator::hasNext() {
    return currentIndex != units.size();
}

Unit UnitIterator::next() {
    if (!hasNext()) throw out_of_range("");
    auto unit = units.at(currentIndex);
    currentIndex++;
    return unit;
}

UnitIterator::UnitIterator(const vector<Unit> &units)
        : units(units),
          currentIndex(0) {}
