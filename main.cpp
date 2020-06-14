#include <iostream>
#include <memory>
#include <vector>
#include <thread>
#include <fstream>
#include "Person.h"

using namespace std;

void print(vector<double> v) {

	cout << "{";
	for (unsigned int i=0;i<v.size();i++ ){
		cout << v[i];

		v[i] = 1;
		cout <<",";
	}
	cout << "}\n";
}
void test() {
	cout << "go" << endl;
}
int main() {
	vector<double> vd(10);
	print(vd);
	print(vd);

	int a = 10;
	int* pint = &a;
	cout << *(pint+1) << endl;
	cout << pint[1] << endl;

	int& r = a;
	cout << r << endl;
	cout << r << endl;
	string name = "CMakeLists.txt";
	ifstream ifs;
	ifs.open(name,ifstream::in);
//	char c = ifs.get();
	char c = ifs.get();
	while (ifs.good()){

//		cout << ifs;
		cout << c;
		c = ifs.get();
	}
	ifs.close();
	Person::Test* test = new Person::Test();
	return 0;
}

