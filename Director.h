/*
 * Director.h
 *
 *  Created on: 2020年7月15日
 *      Author: Bovink
 */

#ifndef DIRECTOR_H_
#define DIRECTOR_H_

class Director {
public:
	Director();
	virtual ~Director();

	void run();
private:
	int a;
};

#endif /* DIRECTOR_H_ */
