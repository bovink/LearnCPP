/*
 * Test.h
 *
 *  Created on: 2020年7月17日
 *      Author: Bovink
 */

#ifndef TEST_AUTO_PTR_TEST_H_
#define TEST_AUTO_PTR_TEST_H_

#include <string>

using namespace std;

class Test {
public:
	Test(string s);
	virtual ~Test();

	void print();

	const string& getS() const {
		return _s;
	}

	void setS(const string &s) {
		_s = s;
	}

private:
	string _s;

};

#endif /* TEST_AUTO_PTR_TEST_H_ */
