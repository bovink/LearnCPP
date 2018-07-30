//
// Created by 吴宗刚 on 2018/7/30.
//

#include "Model.h"

int model::Model::getType() const {
    return type;
}

void model::Model::setType(int type) {
    Model::type = type;
}

void *model::Model::getModel() const {
    return model;
}

void model::Model::setModel(void *model) {
    Model::model = model;
}

void model::to_json(json &j, const model::Model &m) {


    j = json{
            {"type", m.getType()}
    };

    int type = m.getType();
    if (type == 0) {

        j["model"] = *static_cast<date::Date *>(m.getModel());
    } else if (type == 1) {

        j["model"] = *static_cast<person::Person *>(m.getModel());
    }
}

void model::from_json(const json &j, model::Model &m) {

    m.setType(j.at("type").get<int>());
    int type = m.getType();
    if (type == 0) {

        m.setModel(&j.at("model").get<date::Date>());
    } else if (type == 1) {

        m.setModel(&j.at("model").get<person::Person>());
    }
}
