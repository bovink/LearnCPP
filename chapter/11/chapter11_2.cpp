//
// Created by Bovink on 2020/12/2.
//

#include "../../std_lib_facilities.h"

inline ios_base &general(ios_base &b) {
    b.setf(ios_base::fmtflags(0), ios_base::floatfield);
    return b;
}

void output_int() {

    cout << showbase;
    cout << 1234 << "\t\n"; // 10进制
    cout << hex << 1234 << "\n"; // 16进制
    cout << oct << 1234 << '\n'; // 8进制
    cout << dec << 0x4d2 << '\t' << 02322 << '\t' << 1234;
}

void input_int() {
    int a;
    int b;
    int c;
    int d;

    cin >> a >> hex >> b >> oct >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

    cin.unsetf(ios::dec);
    cin.unsetf(ios::oct);
    cin.unsetf(ios::hex);
    cin >> a >> b >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
}

void output_float() {
    cout << 1234.56789 << "\t\t(general)\n"
         << fixed << 1234.56789 << "\t(fixed)\n"
         << scientific << 1234.56789 << "\t(scientific)\n";


}

void output_float2() {

    cout << 1234.56789 << "\t\t"
         << fixed << 1234.56789 << "\t"
         << scientific << 1234.56789 << "\n";

    cout << 1234.56789 << '\n';

    cout << general << 1234.56789 << "\t\t"
         << fixed << 1234.56789 << "\t"
         << scientific << 1234.56789 << "\n";
}

void output_float3() {

    cout << 1234.56789 << "\t\t\t"
         << fixed << 1234.56789 << "\t\t"
         << scientific << 1234.56789 << "\n";

    cout << general << setprecision(5)
         << 1234.56789 << "\t\t\t"
         << fixed << 1234.56789 << "\t\t"
         << scientific << 1234.56789 << "\n";

    cout << general << setprecision(8)
         << 1234.56789 << "\t\t"
         << fixed << 1234.56789 << "\t"
         << scientific << 1234.56789 << "\n";
}

void test11_1() {


    // output int
//    output_int();

    // input int
//    input_int();

    // output float
    output_float3();
}

int main() {
    test11_1();
    return 0;
}
