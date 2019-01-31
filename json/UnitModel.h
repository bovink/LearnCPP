//
// Created by 吴宗刚 on 2019/1/31.
//

#ifndef LEARNCPP_UNITMODEL_H
#define LEARNCPP_UNITMODEL_H

#include "../json/json.hpp"

using json = nlohmann::json;
namespace unitmodel {

    class UnitModel {

    public:
        int getUnitType() const;

        void setUnitType(int unitType);

        void *getUnitData() const;

        void setUnitData(void *unitData);

    private:
        int unitType;
        void *unitData;
    };

    void to_json(json &j, const UnitModel &m);

    void from_json(const json &j, UnitModel &m);
}


#endif //LEARNCPP_UNITMODEL_H
