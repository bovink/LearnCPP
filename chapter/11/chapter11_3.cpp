//
// Created by Bovink on 2020/12/2.
//
#include "std_lib_facilities.h"

void input_app() {

    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ofstream ofs(path+"somefile.txt",ios_base::app);
    ofs << " hello";

}

void file_not_exist() {

    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";
    ofstream ofs(path + "no_such_file.txt");// write mode, will create a file
    ifstream ifs(path + "no_file.txt");// read mode,file not exist will cause error
}

void test11_3() {
    input_app();
//    file_not_exist();
}

int main() {
    test11_3();
    return 0;
}