//
// Created by 吴宗刚 on 2020-11-30.
//

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void writeFile() {
    string name = "test.txt";
    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ofstream ofs(path + name);
    if (!ofs) cerr << "Error! File Not Exist";
    ofs << "Hello World!";
}

void readFile() {
    string name = "test.txt";
    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ifstream ifs(path + name);
    if (!ifs) cerr << "Error! File Not Exist";
    string s;
    while (ifs >> s) {
        cout << s << endl;
    }
}

//int main() {
//    writeFile();
//    readFile();
//    return 0;
//}
//
