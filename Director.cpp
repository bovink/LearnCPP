/*
 * Director.cpp
 *
 *  Created on: 2020年7月15日
 *      Author: Bovink
 */

#include "Director.h"
#include "Scene.h"
#include <iostream>
using namespace std;
Director::Director() {
	// TODO Auto-generated constructor stub

	a = 1;
}

Director::~Director() {
	// TODO Auto-generated destructor stub
}

void Director::run() {

	cout << "run" << endl;
	Scene* s = new Scene();
	s->test

	testPrintDirectorPrivate(this);
}
