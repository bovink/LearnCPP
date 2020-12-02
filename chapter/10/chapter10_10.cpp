//
// Created by 吴宗刚 on 2020-12-01.
//

#include "../../std_lib_facilities.h"

void practise10_10() {
    string name = "raw.txt";
    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ifstream ifs(path + name);
    if (!ifs) cerr << "Error! File Not Exist";
    float n = 0;
    ifs.exceptions(ifs.exceptions()|ios_base::badbit);
    while (cin) {
        cin >> n;
        if (cin.good()) {

            cout << "good" << endl;
        } else if (cin.fail()) {
            cin.unget();
            char c = '@';
            cin >>c;


            cout << "fail " << c<< endl;
        } else if (cin.eof()) {

            cout << "eof" << endl;
        } else if (cin.bad()) {

            cout << "bad" << endl;
        }
        cout << n << endl;
    }

}

int main() {
    practise10_10();
    return 0;
}