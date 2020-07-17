/*
 * Test.cpp
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */

#include "Test.h"
#include <iostream>

void printf(const string& s) {
	cout << s << endl;
}
Test::Test(string s) {
	// TODO Auto-generated constructor stub
	_s = s;
	printf("构造");
}

Test::~Test() {
	// TODO Auto-generated destructor stub
	printf("析构");
}

void Test::print() {

	cout << _s << endl;
}

