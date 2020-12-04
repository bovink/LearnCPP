
#include "iterator.h"
#include "std_lib_facilities.h"

void showUnit1(UnitIterator &iterator) {
    if (iterator.hasNext()) {
        cout << iterator.next().getType() << endl;
    } else {
        cout << "has no unit" << endl;
    }

}

void showUnit2(UnitIterator &iterator) {
    if (iterator.hasNext()) {
        cout << iterator.next().getType() << endl;
    } else {
        cout << "has no unit" << endl;
    }
}

int main() {

    vector<Unit> units(3);
    units.at(0).setType(Unit::UnitType::Watch);
    units.at(1).setType(Unit::UnitType::Activity);
    units.at(2).setType(Unit::UnitType::Sing);
    UnitIterator iterator(units);

    showUnit1(iterator);
    showUnit2(iterator);
    showUnit1(iterator);
    showUnit1(iterator);


    return 0;
}

