//
// Created by 吴宗刚 on 2020-12-01.
//

#include "../../std_lib_facilities.h"

void fill_vector(istream &ist, vector<int> &v, char terminator)
// read integers from ist into v until we reach eof() or terminator
{
    int i = 0;
    while (ist >> i) v.push_back(i);
    if (ist.eof()) return;
    // not good() and not bad() and not eof(), ist must be fail()
    ist.clear();

    char c;
    ist >> c;
    if (c != terminator) {
        ist.unget();
        ist.clear(ios_base::failbit);
    }

}


//int main() {
//
//    cout << "chapter10_6";
//    return 0;
//}