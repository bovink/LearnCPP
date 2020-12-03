
#include "json.hpp"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
using json = nlohmann::json;

int main() {
    string path = "/Users/bovink/Development/MyProject/CppProject/LearnCPP/json.txt";

    ifstream ifs(path);
    if (!ifs) return 1;
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

    return 0;
}

