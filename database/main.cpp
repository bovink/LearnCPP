//
// Created by 吴宗刚 on 2019/1/24.
//

#include "sqlite3.h"
#include <string>
#include <iostream>
#include <chrono>

using namespace std;

void createTable();

void insertData();

void queryData();

int main() {

//    createTable();
//    queryData();
    auto start = chrono::system_clock::now();
    insertData();
    auto end = chrono::system_clock::now();
    chrono::duration<double> use = end - start;
    cout << use.count() << endl;
    return 0;
};

void createTable() {

    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);

    sqlite3_exec(pDb, "create table mytable (id integer primary key autoincrement, name text, age integer, addr text)",
                 nullptr, nullptr, nullptr);
}

void insertData() {
    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);

    for (int i = 0; i < 1000; ++i) {

        string name = "lilei" + to_string(i);
        int age = i;
        string addr = "addr" + to_string(i);

        char buff[100];
        sprintf(buff, "insert into mytable (name, age, addr) values ('%s',%d,'%s')", name.c_str(), age, addr.c_str());
        sqlite3_exec(pDb, buff, nullptr, nullptr, nullptr);
    }

    sqlite3_close(pDb);

}

void queryData() {

    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);

    char **table; // 查询结果
    int r, c;     // 行数、列数

    string sql = "select * from mytable";
    sqlite3_get_table(pDb, sql.c_str(), &table, &r, &c, nullptr);

    cout << "行数是" << r << " 列数是" << c << endl;

    // 第0行（0 ~ c-1），为字段名
    // 第1行（c ~ 2*c-1），第一条记录
    // ......
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j < c; j++) {
            cout << table[i * c + j] << endl;
        }
    }

    // 必须释放查询表
    sqlite3_free_table(table);

}

