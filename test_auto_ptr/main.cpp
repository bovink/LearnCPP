/*
 * main.cpp
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */


#include "Test.h"
#include <memory>

void testNormalPtr(){

	auto t = new Test("123");
	t->print();
}

void testAutoPtr() {

	auto_ptr<Test> _t(new Test("123"));
	_t->print();
}

int main() {

	testAutoPtr();

	return 0;
}
