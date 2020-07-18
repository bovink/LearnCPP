/*
 * main.cpp
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */

#include "Test.h"
#include <memory>
#include <iostream>
#include <unordered_map>

void testNormalPtr() {

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
		cout << "t2 is NULL" << endl;

	auto t = new Test("aaa");
	auto_ptr<Test> _t3(t);
	_t3.release();
	t->print();
	delete t;
}

using shareT= shared_ptr<Test>;
void testSharedPtrMap() {

	unordered_map<string, shareT> m;
	shared_ptr<Test> _m1(new Test("123"));
	m["1"] = _m1;
	shared_ptr<Test> _m2(new Test("456"));
	m["2"] = _m2;
	shared_ptr<Test> _m3(new Test("789"));
	m["3"] = _m3;
	cout << m["1"].use_count() << endl;
//	cout << _m1.use_count() << endl;
	m["1"].reset();
	/*
	 * 因为m["1"] 释放了指针，所以这个成员指针指向的使用索引就是0了。
	 */
	cout << m["1"].use_count() << endl;
	m.erase("1");
	cout << m["1"].use_count() << endl;
//	cout << _m1.use_count() << endl;
	_m1.reset();
	cout << m["1"].use_count() << endl;
//	cout << _m1.use_count() << endl;


	for(auto n :m){
		n.second->print();
	}
//	while(1){
//
//	}
//	m["1"].reset();
//	m["2"]->print();
//	m["3"]->print();
}

int main() {
	testSharedPtrMap();

	return 0;
}
