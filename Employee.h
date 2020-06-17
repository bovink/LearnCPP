/*
 * Employee.h
 *
 *  Created on: 2020Äê6ÔÂ17ÈÕ
 *      Author: Bovink
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee {
public:
	Employee(int age);
	Employee(int, int);
	Employee(int a = 0, int b = 0, int c = 0);
	virtual ~Employee();
};

#endif /* EMPLOYEE_H_ */
