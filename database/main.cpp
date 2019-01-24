//
// Created by 吴宗刚 on 2019/1/24.
//

#include "sqlite3.h"

int main() {

    sqlite3* pDb = nullptr;
    sqlite3_open("testa.db",&pDb);

    return 0;
};

