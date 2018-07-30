//
// Created by 吴宗刚 on 2018/7/30.
//

#ifndef LEARNCPP_DATE_H
#define LEARNCPP_DATE_H

#include <string>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

namespace date {

    class Date {

    public:
        const string &getToday() const;

        void setToday(const string &today);

    private:

        string today;


    };

    void to_json(json &j, const Date &m);

    void from_json(const json &j, Date &m);
}


#endif //LEARNCPP_DATE_H
