/*
 * �����֧��Ҫ����ѧϰ C++ �й��캯����ص�֪ʶ
 */

#include "Employee.h"
#include "Person.h"

struct family {

	int age;

	Person p[3];
};

int main() {

//	auto e = new Employee(); // ����������
//	��Ϊ Employee ��һ�����캯�����������������ж���ĳ�ʼ��������ͨ��������캯�������г�ʼ��

//	auto e1 = new Employee(1);
//	auto e2 = new Employee(1, 1);
//	���Զ��������캯��������ͨ�����ַ�ʽ��ʼ�������

//	auto e3 = new Employee(1);
//	����ͨ�������캯�����Ĭ�ϲ��������ٹ��캯��������
//	���� Employee �� Employee(int, int, int) �Ĳ���ȫ����Ĭ�ϲ���ʱ��
//	���Ϳ���ȡ�� Employee(int) �� Employee(int, int) ���������캯��

	family f;
	f.p[0].print();
	return 0;
}
