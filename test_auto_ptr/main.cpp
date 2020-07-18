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
	/*
	 * auto_ptr 在 C++ 11 中已经被淘汰。
	 * 智能指针可以通过 -> 直接访问指针成员。
	 *
	 * 成员方法：
	 * get() 返回指针成员
	 * reset(新指针) 释放原来持有的指针成员，将新指针作为新的指针成员，新指针参数可以为空。
	 *
	 */

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
