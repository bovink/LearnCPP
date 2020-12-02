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

struct Reading {
    int day;
    int hour;
    double temperature;
};

istream& operator>>(istream& is,Reading& r)
// read a temperature readig from is into r
// format (3 4 9.7)
// check format, but don't bother with data validy
{
    char ch1;
    if(is>>ch1 && ch1!='('){
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }
    char ch2;
    int d;
    int h;
    double t;
    is >> d>> h>>t>>ch2;
    if(!is||ch2!=')') cerr << "bad reading";
    r.day = d;
    r.hour = h;
    r.temperature = t;
    return is;

}



