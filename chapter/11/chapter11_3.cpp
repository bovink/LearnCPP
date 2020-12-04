//
// Created by Bovink on 2020/12/2.
//
#include "std_lib_facilities.h"

void input_app() {

    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ofstream ofs(path + "somefile.txt", ios_base::app);
    ofs << " hello";

}

void file_not_exist() {

    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ofstream ofs(path + "no_such_file.txt");// write mode, will create a file
    ifstream ifs(path + "no_file.txt");// read mode,file not exist will cause error
}

template<class T>
char *as_bytes(T &i) {
    void *addr = &i;
    return static_cast<char *> (addr);
}

void test_binary() {
    cout << "Please enter inpout file name\n";
    string name;
    cin >> name;
    ifstream ifs(name.c_str(), ios_base::binary);
    if (!ifs) {
        cerr << "can't open input file " << name;
        return;
    }
    cout << "Please enter output file name\n";
    cin >> name;
    ofstream ofs(name.c_str(), ios_base::binary);
    if (!ofs) {
        cerr << "can't open output file " << name;
        return;
    }

    vector<int> v;

    int i;
    while (ifs.read(as_bytes(i), sizeof(int)))
        v.push_back(i);

    for (int j = 0; j < v.size(); ++j) {
        ofs.write(as_bytes(v[i]), sizeof(int));
    }
}

void output_binary() {

    string path = "G:\\Project\\CLionProjects\\LearnCPP\\";
    ofstream ofs(path + "somefile.txt", ios_base::binary);
    int i = 1234;
    ofs.write((char*)&i,sizeof(int));
}

void input_binary() {

    string path = "G:\\Project\\CLionProjects\\LearnCPP\\";
    ifstream ifs(path + "somefile.txt", ios_base::binary);
    int i;
    while (ifs.read(as_bytes(i), sizeof(int)))
        cout << i;
}

void test11_3() {
//    output_binary();
    input_binary();
//    file_not_exist();
}

int main() {
    test11_3();
    return 0;
}