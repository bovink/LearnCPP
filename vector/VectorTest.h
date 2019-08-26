//
// Created by 吴宗刚 on 2019-08-26.
//

#ifndef LEARNCPP_VECTORTEST_H
#define LEARNCPP_VECTORTEST_H

#include <vector>
#include <string>

using namespace std;

class VectorTest {

public:
    void printVector();

    void insertString(string s);

    void removeString(string s);

    void modifyString(int index);

    void queryString(string s);

private:
    vector<string> strings;
};


#endif //LEARNCPP_VECTORTEST_H
