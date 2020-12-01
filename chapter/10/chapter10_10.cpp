//
// Created by 吴宗刚 on 2020-12-01.
//

#include "../../std_lib_facilities.h"

const int not_a_reading = -7777;
const int not_a_month = -1;

struct Day {
    vector<double> hour;

    Day();
};

Day::Day() : hour(24) {
    for (int i = 0; i < hour.size(); ++i) {
        hour[i] = not_a_reading;
    }
}

struct Month {
    int month;
    vector<Day> day;

    Month() : month(not_a_month), day(32) {}
};

struct Year {
    int year;// positive == A.D.
    vector<Month> month;

    Year() : month(12) {}
};





