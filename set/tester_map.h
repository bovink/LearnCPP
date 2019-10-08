//
// Created by 吴宗刚 on 2019-09-30.
//

#ifndef LEARNCPP_TESTER_MAP_H
#define LEARNCPP_TESTER_MAP_H

#include <map>
#include <string>

class tester_map {

public:
    tester_map();

    void createMap();

    void addData();

    void findData();

    void deleteData();

    void printAllData();

    void printAllKey();

    void printAllValue();
private:
    std::map<std::string, std::string> person_info;
};


#endif //LEARNCPP_TESTER_MAP_H
