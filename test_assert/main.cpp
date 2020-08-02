/*
 * main.cpp
 *
 *  Created on: 2020年8月1日
 *      Author: Bovink
 */

#include "../stdcommon.h"
//#define NDEBUG
#include <cassert>
#include <exception>

void print(const string *s) {

	assert(s != NULL);
	assert((*s).length()>2);
	cout << *s << endl;
}

int main() {
//	string s = "";
//	print(&s);
	vector<int> a(2);
	string* b = NULL;
	try{
//		if(b == NULL) __throw_out_of_range("the point is NULL");
//		cout << *b << endl;

		int b = a.at(2);
		cout << "测试"<<b << endl;

	}catch(...){
		cerr << "unkown exception" << endl;
		return -2;
	}
	return 0;
}
