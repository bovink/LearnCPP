/*
 * testsharedptr.h
 *
 *  Created on: 2020年11月11日
 *      Author: Bovink
 */

#ifndef TEST_TEST_SHARED_PTR_H_
#define TEST_TEST_SHARED_PTR_H_

#include "../common/person.h"
class test_shared_ptr {
public:
	test_shared_ptr();
	virtual ~test_shared_ptr();

	void testVectorSharedPtr() {

		vector<shared_ptr<person> > persons(5);
	}

	void test2() {

		vector<shared_ptr<person> > persons(5);
		persons.push_back(shared_ptr<person>(new person()));
		_persons = persons;
		persons.clear();
		clearAll();
	}

	void test3(){
		shared_ptr<person> p(new person);
		_persons.push_back(p);

	}

	void clearAll(){

		_persons.clear();
	}

		vector<shared_ptr<person> > _persons;

};

#endif /* TEST_TEST_SHARED_PTR_H_ */
