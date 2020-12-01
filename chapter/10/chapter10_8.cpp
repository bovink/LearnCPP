//
// Created by 吴宗刚 on 2020-12-01.
//

#include "../../std_lib_facilities.h"

/*
 * user define <<
 */
struct Date {
    int year;
    int month;
    int day;

    Date(int year, int month, int day) : year(year), month(month), day(day) {}

};

ostream &operator<<(ostream &os, const Date &d) {
    return os << '(' << d.year
              << ',' << d.month
              << ',' << d.day << ')';
}

void practise10_8() {

    Date d1(1000, 10, 1);
    Date d2(2020, 12, 1);

    //output date of three way
    cout << d1 << d2 << endl;
    operator<<(cout, d1) << d2 << endl;
    operator<<(operator<<(cout, d1), d2) << endl;
}

//int main() {
//    practise10_8();
//    return 0;
//}