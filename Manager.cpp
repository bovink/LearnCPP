/*
 * Manager.cpp
 *
 *  Created on: 2020Äê6ÔÂ15ÈÕ
 *      Author: Bovink
 */

#include "Manager.h"
#include <string>
#include <iostream>
using namespace std;

Manager::Manager(int as) {

	s = as;
}
Manager::~Manager() {

}

void Manager::print() {
	cout << s << endl;
}
