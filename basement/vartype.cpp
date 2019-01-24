//
// Created by 吴宗刚 on 2019/1/7.
//

#include <iostream>

using namespace std;

void testInitVar() {
    // 整型
    int i = 1;
    long l = 1;
    short s = 1;

    // 浮点型
    float f = 0.1;
    double d = 0.1;

    // 布尔型
    bool b = true;

    // 字符型
    char c = 'a';
}

void testPointer() {

    int i = 1;
    int *pi = &i;
    int **ppi = &pi;

    int **newppi = ppi;

    **newppi = 2;

    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;
    cout << "========" << endl;

    **ppi = 3;
    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;
    cout << "========" << endl;
    int x = 1;
    *ppi = &x;
    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;

    cout << "========" << endl;
    *pi = 4;
    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;
    cout << "========" << endl;

    i = 5;

    cout << i << endl;
    cout << *pi << endl;
    cout << **ppi << endl;
    cout << "========" << endl;

}

void testString() {

    string s = "abcd";
    size_t l = strlen(s.c_str());
    cout << l << endl;
}

void testArray() {
    char chars[] = "abcd";
    int l = sizeof(chars);
    cout << l << endl;
    for (int i = 0; i < l; ++i) {
        cout << chars[i] << endl;
    }
}

// 可读可写
void testReference(int &i) {

    i = 1;
}

// 只可读
void testReference(const int &i) {

    cout << i << endl;
}

void testPointer(int *pi) {

    *pi = 10;
}

//int main() {
//
//    // 原始字符串
//    string s = "HTTP/1.1 200 OK\n"
//               "Content-Type: image/jpeg\n"
//               "Last-Modified: Tue, 15 Jan 2019 05:59:46 GMT\n"
//               "Accept-Ranges: bytes\n"
//               "ETag: \"8d28c48497acd41:0\"\n"
//               "Server: Microsoft-IIS/7.5\n"
//               "Date: Tue, 15 Jan 2019 07:38:33 GMT\n"
//               "Content-Length: 872234";
//
//    // 获取长度
//    size_t len = strlen(s.c_str());
//    cout << "len:" << len << endl;
//    // 寻找eTag头部
//    unsigned long a  = s.find("ETag: ");
//    cout << a << endl;
//    // 截取etag以后字符串
//    string s1 = s.substr(a+6,len);
//    cout << "after slice:" << s1 << endl;
//
//    size_t len1 = strlen(s1.c_str());
//    cout << "len1:" << len1 << endl;
//
//    string s2 = s1.substr(1,len1);
//    cout << "after slice:" << s2 << endl;
//
//    unsigned long b = s2.find("\"");
//    cout << "b:" << b <<endl;
//
//    string wanted = s2.substr(0,b);
//    cout << wanted <<endl;
//
//
//
//    return 0;
//}
