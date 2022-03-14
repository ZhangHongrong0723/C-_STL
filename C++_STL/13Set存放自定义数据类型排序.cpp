#include<iostream>
using namespace std;
#include<string>
class Person {
public:
	string m_name;
	int m_age;
	Person(string name,int age) {
		this->m_age = age;
		this->m_name = name;
	}
	
};
class MyCompare {
public:
	bool operator()( const Person &p1, const Person &p2) {
		return p1.m_age > p2.m_age;
	}

};

#include <set>
void seTest() {
	set<Person,MyCompare>s1;
	Person p1("小张",22);
	Person p2("小李", 10);
	Person p3("小王", 26);
	Person p4("小陈", 23);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, MyCompare> ::iterator its = s1.begin(); its != s1.end(); its++) {
		cout << its->m_name <<"\t"<<its->m_age<< endl;
	}

}
int main13() {
	seTest();
	system("pause");
	return 0;
}