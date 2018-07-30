//
// Created by 吴宗刚 on 2018/7/30.
//

#include "Date.h"

const string &date::Date::getToday() const {
    return today;
}

void date::Date::setToday(const string &today) {
    Date::today = today;
}

void date::to_json(json &j, const date::Date &m) {

    j = json{
            {"today", m.getToday()}
    };

}

void date::from_json(const json &j, date::Date &m) {

    m.setToday(j.at("today").get<string>());

}
