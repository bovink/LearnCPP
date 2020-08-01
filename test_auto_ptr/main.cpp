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

	/*
	 * 测试普通指针
	 * 普通指针必须 new 与 delete 配对，不然不会释放内存
	 */
	cout << "==========测试普通指针==========" << endl;
	auto t = new Test("测试普通指针");
	t->print();
	delete t;
}

void testAutoPtr() {
	/*
	 * auto_ptr 在 C++ 11 中已经被淘汰。
	 * 通过  -> 可以像类的指针一样操作类的 public 成员。
	 * 通过 . 使用 auto_ptr 的方法。
	 *
	 * 成员方法：
	 * get() 返回指针成员
	 * reset(新指针) 释放原来持有的指针成员，将新指针作为新的指针成员，新指针参数可以为空。
	 * release() 这个函数只是把智能指针赋值为空，但是它原来指向的内存并没有被释放，相当于它只是释放了对资源的所有权。
	 */

	/*
	 * 测试操作符
	 */
	cout << "==========操作符测试==========" << endl;
	auto t1 = new Test("操作符测试");
	auto_ptr<Test> _t1(t1);
	_t1->setS("hello");
	_t1.get()->print();
	(*_t1).setS("world");
	_t1.get()->print();

	/*
	 * get() 方法测试
	 * 通过 get() 可以获取类的指针
	 */
	cout << "==========get() 方法测试==========" << endl;
	auto t2 = new Test("get() 测试");
	auto_ptr<Test> _t2(t2);
	_t2.get()->print();

	/*
	 * release() 方法测试
	 */
	cout << "==========release() 方法测试==========" << endl;
	auto t3 = new Test("release fun test");
	auto_ptr<Test> _t3(t3);
	_t3.release();

	/*
	 * reset() 方法测试
	 */
	cout << "==========reset() 方法释放指针测试==========" << endl;
	auto t4 = new Test("reset() 释放智能指针中的指针测试 ");
	auto_ptr<Test> _t4(t4);
	_t4.reset();

	/*
	 * 判断智能指针是否为 NULL
	 */
	cout << "==========判断 auto_ptr 是否为空==========" << endl;
	auto t5 = new Test("判断auto_ptr是否为空");
	auto_ptr<Test> _t5(t5);
	_t5.reset();
	if (_t5.get() == NULL) {
		cout << "t5 为 NULL" << endl;
	} else {
		cout << "t5 不为 NULL" << endl;
	}

	/*
	 * 测试赋值操作
	 */
	cout << "==========测试赋值操作==========" << endl;
	auto t6 = new Test("赋值操作123");
	auto t7 = new Test("赋值操作456");
	auto_ptr<Test> _t6(t6);
	auto_ptr<Test> _t7(t7);
	_t6 = _t7;
	_t6->print();
	if (_t7.get() == NULL) {
		cout << "t7已经释放" << endl;
	}

	cout << "==========测试结束==========" << endl;
}

unique_ptr<Test> test() {

	return unique_ptr<Test>(new Test("测试123"));
}

void testUniquePtr() {
	/*
	 * unique在使用上和auto_ptr类似，但是多出了move方法，因为unique是独享指针的。
	 * unique的出现淘汰了auto_ptr，本质上是高级的auto_ptr的感觉。
	 */
	cout << "==========move()测试==========" << endl;
	auto t1 = new Test("测试123");
	auto t2 = new Test("测试456");
	unique_ptr<Test> _t1(t1);
	unique_ptr<Test> _t2(t2);

	_t1 = move(_t2); // 不能直接赋值,释放123，移动456

	if (_t2 == NULL) {
		cout << "_t2为NULL" << endl;
	}

	auto t = _t1.release(); // 456移动
	if (_t1 == NULL) {
		cout << "_t1为NULL" << endl;
	}
	t->print();
	_t2.reset(t);
	_t1 = unique_ptr<Test>(new Test("测试123")); // 移动构造函数
	// 这里虽然被windows eclipse编译报错，但是能运行

	_t1.swap(_t2);
	_t1->print();
	_t2->print();
	/*
	 * swap测试，交换两个指针的值
	 */
	cout << "==========测试结束==========" << endl;

}

void testSharedPtr() {
	/*
	 * 从名字可以看出一个shared_ptr可以被指针多次引用。
	 */
	auto t1 = new Test("123");
	auto t2 = new Test("456");

	shared_ptr<Test> _t1(t1);
	shared_ptr<Test> _t2(t2);

	// t1被释放，t2被引用两次，即_t1引用一次，_t2引用一次
	_t1 = _t2;
	cout << _t1.use_count() << endl;
	cout << _t2.use_count() << endl;
	// _t1释放对t2的引用，_t1的自身成员指针消失。
	_t1.reset();
	cout << _t1.use_count() << endl;
	cout << _t2.use_count() << endl;

	cout << "==========测试结束==========" << endl;
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

//	for(auto n :m){
//		n.second->print();
//	}
}

//int main() {
//	testSharedPtr();
//	return 0;
//}
