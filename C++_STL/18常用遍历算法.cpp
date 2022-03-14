#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
/*
	for_each:实现遍历容器
*/

//普通函数方式实现
void print(int val) {
	cout << val << "\t";
}
//仿函数实现
class pr {
public:
	void operator()(int val) {
		cout << val << "\t";
	}

};
class Person {
public:
	int m_age;
	string m_name;
	Person(int age, string name) {
		this->m_age = age;
		this->m_name = name;
	}
public:
	bool operator ==( const Person &p2) {
		if (this->m_name == p2.m_name&&this->m_age == p2.m_age) {
			return true;
		}
		else {
			return false;
		}
	}

};
class va {

public:
	int operator()(int val) {
		return val;
	}
	
};

void vetest() {
	vector<int>ve;
	ve.push_back(20);
	ve.push_back(10);
	ve.push_back(9);
	ve.push_back(70);
	ve.push_back(30);

	for_each(ve.begin(), ve.end(), print);
	cout << endl;
	for_each(ve.begin(), ve.end(), pr());//仿函数实现遍历
	cout << endl;
	vector<int>vtarget;
	vtarget.resize(ve.size());//撑开容器，这一步必须要
	transform(ve.begin(), ve.end(), vtarget.begin(), va());
	for_each(vtarget.begin(), vtarget.end(), pr());//仿函数实现遍历

	vector<Person>vepe;
	//vepe.size(3);
	Person p1(11,"小黑");
	Person p2(11, "小黑");
	vepe.push_back(p1);
	//vepe.push_back(p2);

	vector<Person>::iterator it=find(vepe.begin(),vepe.end(),p2);
	if (it == vepe.end()) {
		cout << "没找到" << endl;
	}
	else {
		cout << "找到" << (*it).m_name << endl;
	}

}
int main18() {

	vetest();
	system("pause");
	return 0;
}