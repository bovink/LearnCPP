#include <iostream>
#include <string>

#include "md5/md5.h"

using namespace std;

int main() {
    string x = "test.jpg";

    string md5string = md5(x);
    cout << md5string <<endl;

    string md5string2 = md5(x.c_str(), x.length());
    cout << md5string2 <<endl;
    return 0;
}