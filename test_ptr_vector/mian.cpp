/*
 * mian.cpp
 *
 *  Created on: Jul 18, 2020
 *      Author: bovink
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include "../test_auto_ptr/Test.h"
#include <memory>

using namespace std;

void testVector() {

	// 测试查找删除vector
	vector<string> v;
	v.push_back("hello");
	v.push_back("world");
	v.push_back("world");

	auto i = find(v.begin(), v.end(), "world");

	v.erase(i);
	v.insert(v.end(), "hello");
	for (auto s : v) {
		cout << s << endl;
	}

}

void testPtrPass() {

	/*
	 */
	unique_ptr<Test> _t1(new Test("123"));
	unique_ptr<Test> _t2(new Test("456"));
	_t1->setPtrs(_t2.get());
//	_t2.reset();
	_t1->printPtrs();

}
//int main() {
//
//	testPtrPass();
//	return 0;
//}
//
