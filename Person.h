/*
 * Person.h
 *
 *  Created on: 2020��6��18��
 *      Author: Bovink
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;
class Person {
public:
	Person(string n = "hello");
	virtual ~Person();

	void print();
private:
	string name;
};

#endif /* PERSON_H_ */
