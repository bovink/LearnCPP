/*
 * Test.cpp
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */

#include "Test.h"
#include <iostream>

void printf(const string &s) {
	cout << s << endl;
}

Test::Test(string s) {
	// TODO Auto-generated constructor stub
	_s = s;

	string b = "构造:" + _s;
	cout << b << endl;
}

Test::~Test() {
	// TODO Auto-generated destructor stub
	string b = "析构:" + _s;
	cout << b << endl;
}

void Test::print() {

	cout << _s << endl;
}

