/*
 * 这个分支主要用来学习 C++ 中构造函数相关的知识
 */

#include "Employee.h"
#include "Person.h"

struct family {

	int age;

	Person p[3];
};

int main() {

//	auto e = new Employee(); // 编译器报错
//	因为 Employee 有一个构造函数，所以这个类的所有对象的初始化都必须通过这个构造函数来进行初始化

//	auto e1 = new Employee(1);
//	auto e2 = new Employee(1, 1);
//	可以定义多个构造函数来允许通过多种方式初始化类对象

//	auto e3 = new Employee(1);
//	可以通过给构造函数添加默认参数来减少构造函数的数量
//	就像 Employee 的 Employee(int, int, int) 的参数全都有默认参数时，
//	它就可以取代 Employee(int) 和 Employee(int, int) 这两个构造函数

	family f;
	f.p[0].print();
	return 0;
}
