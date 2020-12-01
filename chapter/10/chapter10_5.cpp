//
// Created by 吴宗刚 on 2020-11-30.
//

#include "chapter10_5.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

const string PATH = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/";

struct Reading {
    int hour;
    double temperature;

    Reading(int hour, double temperature) : hour(hour), temperature(temperature) {}
};

void practise() {

    cout << "Please enter input file name:";
    string name;
    cin >> name;
    ifstream ifs(PATH + name);
    if (!ifs) {
        cerr << "File Not Exist: " << name;
        return;
    }
    cout << "Please enter name of output file:";
    cin >> name;
    ofstream ofs(PATH + name);
    if (!ofs) {
        cerr << "Can't open File " << name;
        return;
    }

    vector<Reading> temps;
    int hour;
    float temperature;
    while (ifs >> hour >> temperature) {
        if (hour < 0 || hour > 23) cerr << "hour out of range";
        temps.push_back(Reading(hour, temperature));
    }

    for (int i = 0; i < temps.size(); ++i) {
        ofs << '(' << temps.at(i).hour << ','
            << temps.at(i).temperature << ")\n";
    }
}

//int main() {
//    practise();
//    return 0;
//}

