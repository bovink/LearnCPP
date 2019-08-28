#include <iostream>

using namespace std;

int main() {
    locale loc("en_US.UTF-8");
    wchar_t s = L'，';
    cout << boolalpha << ispunct(s, loc) << endl;
    wcout.imbue(locale("zh_cn.utf-8"));
    wcout << s << endl;

    wstring a = L"你好";
    wchar_t ss = a[0];
    cout << boolalpha << ispunct(ss, loc) << endl;
    wcout << ss << endl;
    return 0;
}