#include <iostream>
#include <memory>
#include <vector>
#include <thread>
#include <fstream>
#include "Person.h"
#include "Employee.h"
#include "Manager.h"

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
struct Managers {
int a;
Manager m;
};
int main() {
	vector<double> vd(10);
	print(vd);
	print(vd);
	auto manager = new Manager();
	Managers ms;
	ms.m.print();
	cout << ms.a << endl;

	double dd = -1;
	string s = dd ? "true":"false";
	cout << s <<endl;

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

