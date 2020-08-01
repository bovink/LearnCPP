/*
 * main.cpp
 *
 *  Created on: 2020年8月1日
 *      Author: Bovink
 */

#include "../stdcommon.h"
//#define NDEBUG
#include <cassert>

void print(const string *s) {

	assert(s != NULL);
	assert((*s).length()>2);
	cout << *s << endl;
}

int main() {
	string s = "";
	print(&s);
	return 0;
}
