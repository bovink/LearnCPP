//
// Created by 吴宗刚 on 2020-12-01.
//

#include "../../std_lib_facilities.h"

void skip_to_int() {
    if (cin.fail()) {
        cin.clear();
        char ch;
        while (cin >> ch) {
            if (isdigit(ch)) {
                cin.unget();

                return;
            }
        }
    }

    cerr << "no input";
}

int get_int() {

    int n = 0;
    while (true) {
        if (cin >> n)return n;
        cout << "Sorry, that was not a number; please try again\n";
        skip_to_int();
    }
}

int get_int(int low, int high) {

    cout << "Please enter an integer in the range "
         << low
         << " to "
         << high
         << " (inclusive):\n";
    while (true) {
        int n = get_int();
        if (low <= n && n <= high) return n;
        cout << "Sorry "
             << n
             << " is not in the ["
             << low
             << ':'
             << high
             << "] range; please try again\n";
    }

}

int get_int(int low, int high, const string &greeting, const string &sorry) {
    cout << greeting << ":[" << low << ':' << high << "]\n";
    while (true) {
        int n = get_int();
        if (low <= n && n <= high) return n;
        cout << sorry << ":[" << low << ':' << high << "\n";
    }
}

void practise10_7() {

    // don't forget catch exception
    // cin will throw some exception with wrong input
    get_int(10, 20);
}


//int main() {
//    practise10_7();
//
//    return 0;
//}