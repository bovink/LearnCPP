//
// Created by 吴宗刚 on 2019/1/24.
//

#include "sqlite3.h"
#include <string>
#include <iostream>
#include <chrono>

using namespace std;

void createTable();

void insertData1();

void insertData2();

void insertData3();

void queryData();

void deleteTable();

int main() {

//    createTable();
//    queryData();
    deleteTable();
    auto start = chrono::system_clock::now();
    insertData3();
    auto end = chrono::system_clock::now();
    chrono::duration<double> use = end - start;
    cout << use.count() << endl;
    queryData();
    return 0;
};

void createTable() {

    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);

    sqlite3_exec(pDb, "create table mytable (id integer primary key autoincrement, name text, age integer, addr text)",
                 nullptr, nullptr, nullptr);
}

void deleteTable() {

    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);

    sqlite3_exec(pDb, "delete from mytable", nullptr, nullptr, nullptr);
}

void insertData1() {
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

void insertData2() {
    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);
    sqlite3_exec(pDb, "PRAGMA synchronous = OFF; ", 0, 0, 0);

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

void insertData3() {
// 插入（替换）
//    const char *sql_insert = "INSERT INTO t_data (number, name) VALUES (?, ?);";
//    const char *sql_update = "REPLACE INTO t_data (number, name) VALUES ( ?, ?);";
//    sqlite3_stmt *stmt;
//    sqlite3_prepare_v2(_db, sql_update, -1, &stmt, NULL);
//    sqlite3_bind_text(stmt, 1, "1007", -1, SQLITE_TRANSIENT);
//    sqlite3_bind_text(stmt, 2, "Dolhin", -1, SQLITE_TRANSIENT);
//    sqlite3_step(stmt);
//    sqlite3_finalize(stmt);

    sqlite3 *pDb = nullptr;
    sqlite3_open("test.db", &pDb);
    const char *sql = "insert into mytable (name, age, addr) values (?,?,?);";

    sqlite3_exec(pDb, "begin;", nullptr, nullptr, nullptr);
    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(pDb, sql, -1, &stmt, nullptr);

    for (int i = 0; i < 1000; ++i) {
        string name = "lilei" + to_string(i);
        int age = i;
        string addr = "addr" + to_string(i);

        sqlite3_reset(stmt);
        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(stmt, 2, age);
        sqlite3_bind_text(stmt, 3, addr.c_str(), -1, SQLITE_TRANSIENT);
    }
    sqlite3_finalize(stmt);

    sqlite3_exec(pDb, "commit;", nullptr, nullptr, nullptr);
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
        cout << "===============" << endl;
    }

    // 必须释放查询表
    sqlite3_free_table(table);

}

