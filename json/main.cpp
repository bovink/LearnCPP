//
// Created by 吴宗刚 on 2018/7/30.
//

#include <iostream>
#include "UnitModel.h"
#include <fstream>
#include "json.hpp"
#include "Date.h"
#include "Model.h"
#include "Person.h"
#include "WordModel.h"

using json = nlohmann::json;
using namespace std;

void testDate() {

    json jdate;
    jdate["today"] = "hello";

    json j;

    j["type"] = 0;
    j["model"] = jdate;

    cout << j << endl;
    model::Model model = j;
    date::Date d = *static_cast<date::Date *>(model.getModel());
    cout << d.getToday() << endl;
}

void testPerson() {

    json jperson;
    jperson["age"] = 10;

    json j;

    j["type"] = 1;
    j["model"] = jperson;

    cout << j << endl;
    model::Model model = j;
    person::Person p = *static_cast<person::Person *>(model.getModel());
    cout << p.getAge() << endl;
}

string readFile(string filePath) {
    string content;
    string readBuffer;
    ifstream infile;
    infile.open(filePath);
    if (!infile) {
        cout << "open failed" <<endl;
    }
    while (infile >> readBuffer) {
        content += readBuffer;
    }
    return content;

}

//int main() {
//
//    string x = readFile("/Users/bovink/Development/MyProject/CLionProject/LearnCPP/string/course11.txt");
//    cout << x << endl;
//    json j = json::parse(x);
//
//    vector<unitmodel::UnitModel> list = j;
//
//    string x2 = readFile("/Users/bovink/Development/MyProject/CLionProject/LearnCPP/string/course12.txt");
//    cout << x2 << endl;
//    json j2 = json::parse(x2);
//
//    vector<unitmodel::UnitModel> list2 = j2;
//    for (int i = 0; i < list2.size(); ++i) {
//        int type = list2.at(i).getUnitType();
//        cout << type << endl;
//        if (type == 0) {
//            unit1::WordModel wordModel = *static_cast<unit1::WordModel*>(list2.at(i).getUnitData());
//            cout << wordModel.getWordImage() <<endl;
//        }
//    }
//
//    for (int i = 0; i < list.size(); ++i) {
//        int type = list.at(i).getUnitType();
//        cout << type << endl;
//        if (type == 0) {
//            unit1::WordModel wordModel = *static_cast<unit1::WordModel*>(list.at(i).getUnitData());
//            cout << wordModel.getWordImage() <<endl;
//        }
//    }
//    return 0;
//}
