/*
 * Scene.cpp
 *
 *  Created on: 2020年7月15日
 *      Author: Bovink
 */

#include "Scene.h"

#include <iostream>
using namespace std;
Scene::Scene() {
	// TODO Auto-generated constructor stub

	a = 1111;
}

Scene::~Scene() {
	// TODO Auto-generated destructor stub
}

void testPrintDirectorPrivate(Scene* s){

	cout << s->a << endl;
}


void Scene::test(){
}
