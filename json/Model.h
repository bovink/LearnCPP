//
// Created by 吴宗刚 on 2018/7/30.
//

#ifndef LEARNCPP_MODEL_H
#define LEARNCPP_MODEL_H

#include <string>
#include "json.hpp"
#include "Date.h"
#include "Person.h"

using namespace std;
using json = nlohmann::json;

namespace model {

    class Model {

    public:
        int getType() const;

        void setType(int type);

        void *getModel() const;

        void setModel(void *model);


    private:

        int type;
        void* model;

    };
    void to_json(json &j, const Model &m);

    void from_json(const json &j, Model &m);
}


#endif //LEARNCPP_MODEL_H
