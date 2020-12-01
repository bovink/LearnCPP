//
// Created by 吴宗刚 on 2020-12-01.
//

#include "../../std_lib_facilities.h"
/*
 * user define >>
 */
struct Date {
    int year;
    int month;
    int day;

    Date(int year, int month, int day) : year(year), month(month), day(day) {}
};


istream &operator>>(istream &is, Date &dd) {
//it's very easy to make mistake by using this way

    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is) return is;
    if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')') {
        is.clear(ios_base::failbit);
        return is;
    }
    dd = Date(y, m, d);
    return is;
}

void practise10_9() {

    Date d(0, 0, 0);
    cin >> d;
    cout << d.year << "\t"
         << d.month << "\t"
         << d.day;
}

int main() {
    practise10_9();
    return 0;
}