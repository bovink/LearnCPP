/*
 * main.cpp
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */


#include "Test.h"
#include <memory>
#include <iostream>

void testNormalPtr(){

	auto t = new Test("123");
	t->print();
}

void testAutoPtr() {

	auto_ptr<Test> _t(new Test("123"));
	_t->setS("hello");
	_t->print();
	_t.get()->print();

	(*_t).setS("world");
	_t->print();
	_t.reset(new Test("456"));
	_t->print();

	cout << "\n";
	auto_ptr<Test> _t2(new Test("789"));
	_t = _t2;
	_t->print();
	if (_t2.get() == NULL)
		cout << "t2 is NULL" <<endl;

	auto t = new Test("aaa");
	auto_ptr<Test> _t3(t);
	_t3.release();
	t->print();
	delete t;
}

int main() {

	testAutoPtr();

	return 0;
}
