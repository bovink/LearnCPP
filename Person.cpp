/*
 * Person.cpp
 *
 *  Created on: 2020��6��18��
 *      Author: Bovink
 */

#include "Person.h"
#include <iostream>

Person::Person(string n) {
	// TODO Auto-generated constructor stub

	name = n + "hello";
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

void Person::print() {

	cout << name << endl;
}
