#include<iostream>
using namespace std;

/*
	set�Ļ����������������
	set�����ڲ������ݵ�ʱ�򣬻�����Զ�����
	set��multiset�����ڹ���ʽ�������ײ��Ƕ�����

	����
	set���������ظ�Ԫ��
	multiset�������ظ�Ԫ��

	set�Ĵ�С������empty��size��swap֮ǰһ�£�ɾ����erase��clearҲ��һ�µġ�
	erase����ͨ��������ɾ��������ָ��ɾ����ɾ��֮ǰ���������
*/
#include <set>
void printSet(set<int>&s) {
	for (set<int>::iterator iset = s.begin(); iset != s.end(); iset++) {
		cout << *iset << "\t";
	}
	cout << endl;
}
void printSet(multiset<int>&s) {
	for (multiset<int>::iterator iset = s.begin(); iset != s.end(); iset++) {
		cout << *iset << "\t";
	}
	cout << endl;
}
//�Զ����޸��������
class MyCompare {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;
	}


};
void printSet(set<int,MyCompare>&s) {
	for (set<int,MyCompare>::iterator iset = s.begin(); iset != s.end(); iset++) {
		cout << *iset << "\t";
	}
	cout << endl;
}
void sstest1() {
	set<int> s1;
	s1.insert(3);
	s1.insert(8);
	s1.insert(1);
	s1.insert(2);
	s1.insert(9);
	s1.insert(10);//setֻ��insert�Ĳ��뷽ʽ
	printSet(s1);



	//���Ҳ�����find���������Ϊ��ͨ���������������飬�ҵ�����λ�ã�
	//�Ҳ����������һ������λ��
	set<int>::iterator ss=s1.find(8);//s1.find(7);
	if (ss != s1.end()) {
		cout << "find" <<endl;
	}
	else {
		cout << " not find" << endl;
	}
	int i = s1.count(10);//��ʹ�ж��10Ҳ��i=1��iֻ��0��1�Ŀ��ܣ���Ϊ�Զ�ȥ�ء�

	set<int,MyCompare> s2;//���÷º����޸��������
	s2.insert(3);
	s2.insert(8);
	s2.insert(1);
	s2.insert(2);
	s2.insert(9);
	s2.insert(10);//setֻ��insert�Ĳ��뷽ʽ
	printSet(s2);
}

void mutlsettest1() {
	multiset<int> mset;
	mset.insert(10);
	mset.insert(20);
	mset.insert(30);
	mset.insert(9);
	mset.insert(10);
	mset.insert(20);
	printSet(mset);
}
int main11() {
	sstest1();
	mutlsettest1();
	system("pause");
	return 0;
}