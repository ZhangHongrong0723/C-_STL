#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
/*
	for_each:ʵ�ֱ�������
*/

//��ͨ������ʽʵ��
void print(int val) {
	cout << val << "\t";
}
//�º���ʵ��
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
	for_each(ve.begin(), ve.end(), pr());//�º���ʵ�ֱ���
	cout << endl;
	vector<int>vtarget;
	vtarget.resize(ve.size());//�ſ���������һ������Ҫ
	transform(ve.begin(), ve.end(), vtarget.begin(), va());
	for_each(vtarget.begin(), vtarget.end(), pr());//�º���ʵ�ֱ���

	vector<Person>vepe;
	//vepe.size(3);
	Person p1(11,"С��");
	Person p2(11, "С��");
	vepe.push_back(p1);
	//vepe.push_back(p2);

	vector<Person>::iterator it=find(vepe.begin(),vepe.end(),p2);
	if (it == vepe.end()) {
		cout << "û�ҵ�" << endl;
	}
	else {
		cout << "�ҵ�" << (*it).m_name << endl;
	}

}
int main18() {

	vetest();
	system("pause");
	return 0;
}