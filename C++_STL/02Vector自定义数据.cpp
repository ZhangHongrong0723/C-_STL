#include <iostream>
using namespace std;
#include <string>
class Person {
public:
	string m_name;
	int m_age;
	Person(string name,int age) {
		this->m_name = name;
		this->m_age = age;
	
	}



};
#include <vector>
#include <algorithm>
void myprint(Person p) {
	cout << "�����" << p.m_age << "\t������" << p.m_name << endl;
}
void test1() {
	vector<Person>v;
	Person p1("a",1);
	Person p2("b", 2);
	Person p3("c", 3);
	Person p4("d", 4);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	for_each(v.begin(), v.end(), myprint);
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "�����" << it->m_age << "\t������" << it->m_name << endl;
	}*/
	
	

}
int main2() {

	test1();
	system("pause");
	return 0;
}