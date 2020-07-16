/*
 * Scene.h
 *
 *  Created on: 2020年7月15日
 *      Author: Bovink
 */

#ifndef SCENE_H_
#define SCENE_H_

class Scene {
public:
	Scene();
	virtual ~Scene();

	void test();
	friend void testPrintDirectorPrivate(Scene* s);
private:
	int a;
};

#endif /* SCENE_H_ */
