//
// Created by 吴宗刚 on 2019/1/31.
//

#include "UnitModel.h"
#include "WordModel.h"
#include "WordListenModel.h"
#include "SentenceModel.h"

int unitmodel::UnitModel::getUnitType() const {
    return unitType;
}

void unitmodel::UnitModel::setUnitType(int unitType) {
    UnitModel::unitType = unitType;
}

void *unitmodel::UnitModel::getUnitData() const {
    return unitData;
}

void unitmodel::UnitModel::setUnitData(void *unitData) {
    UnitModel::unitData = unitData;
}

void unitmodel::to_json(json &j, const unitmodel::UnitModel &m) {

    int unitType = m.getUnitType();
    if (unitType == 0) {
        j["unitData"] = *static_cast<unit1::WordModel *>(m.getUnitData());
    } else if (unitType == 1) {

        j["unitData"] = *static_cast<unit5::SentenceModel *>(m.getUnitData());
    } else if (unitType == 2) {

        j["unitData"] = *static_cast<unit6::WordListenModel *>(m.getUnitData());
    }
    j["unitType"] = unitType;
}
unit1::WordModel object1;
void unitmodel::from_json(const json &j, unitmodel::UnitModel &m) {

    auto unitType = j.at("unitType").get<int>();
    m.setUnitType(unitType);

    if (unitType == 0) {
         object1 = j.at(
                "unitData").get<unit1::WordModel>();
        m.setUnitData(&object1);
    } else if (unitType == 1) {

        unit5::SentenceModel object1 = j.at(
                "unitData").get<unit5::SentenceModel>();
        m.setUnitData(&object1);
    } else if (unitType == 2) {

        unit6::WordListenModel object1 = j.at(
                "unitData").get<unit6::WordListenModel>();
        m.setUnitData(&object1);
    }
}
