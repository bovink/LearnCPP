
#include "json.hpp"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
using json = nlohmann::json;

void parse_list(ifstream &ifs) {

    stringstream ss;
    ifs >> ss.rdbuf();
    string content(ss.str());

    cout << content << endl;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
    json j = json::parse(content);
    json list = j["biz_result"]["list"];
    for (int i = 0; i < list.size(); ++i) {

        int d =-1;
        string s = list.at(i).at("duration").get<string>();
        istringstream iss(s);
        iss>>d;
        cout << d << endl;
    }
    cout << list.dump() << endl;
}

void parse_json(ifstream &ifs) {

    stringstream ss;
    ifs >> ss.rdbuf();

    string content(ss.str());

    cout << content << endl;
    json j = json::parse(content);
    json biz_result = j["biz_result"];
    string msg;
    string code;
    if (biz_result.find("msg") != biz_result.end()) {

        msg = biz_result.at("msg").get<string>();
    }
    if (biz_result.find("code") != biz_result.end()) {

        code = biz_result.at("code").get<string>();
    }
    cout << msg << ":msg" << '\n'
         << code << ":code" << '\n';
}

int main() {

    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/json1.txt";

    ifstream ifs(path);
    if (!ifs) return 1;
    parse_list(ifs);
    return 0;
}

