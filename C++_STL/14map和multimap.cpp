#include <iostream>
using namespace std;
#include <map>
#include <string>
/*
	map�е�Ԫ�ض�������pair����
	pair�еĵ�һ��Ԫ����key����ֵ������Ϊ���������ڣ��ڶ���Ԫ����value��ʵֵ��
	����Ԫ�ظ���Ԫ�صļ�ֵ�Զ�����

	multimap��map�������ڹ���ʽ�������ײ�ṹ�Ƕ�����ʵ��

	���߶�����ͨ����ֵ�ҵ�valueֵ
	map�������ظ���keyֵ��multimap�������ظ���ֵ��value�ǿ������ظ���

	map�еĿ�����empty��size��swap�Ĳ���,insert,erase,clear�Ĳ�����
	���Һ�ͳ�Ʋ�����set��һ����
	find���ص�����λ�á�count����0����1.

*/
void printMap(map<string,int>&m) {
	for (map<string, int>::iterator itmap = m.begin(); itmap != m.end(); itmap++) {
		cout << "key=" << (*itmap).first << "\t value=" << itmap->second<<"\t"; 
	}
	cout << endl;
}
class MyCompare {
public:
	bool operator()(string v1,string v2) {
		return v1 > v2;
	}

};

void printMap(map<string, int,MyCompare>&m) {
	for (map<string, int>::iterator itmap = m.begin(); itmap != m.end(); itmap++) {
		cout << "key=" << (*itmap).first << "\t value=" << itmap->second << "\t";
	}
	cout << endl;
}
void mtest() {
	map<string, int>m1;
	m1.insert(pair<string, int>("С��", 11));
	m1.insert(pair<string, int>("С��", 10));
	m1.insert(pair<string, int>("С��", 12));
	m1.insert(pair<string, int>("С��", 13));
	printMap(m1);

	map<string, int>::iterator is = m1.find("Сll");
	if (is != m1.end()) {
		cout << "�ҵ�" << endl;
	}
	else {
		cout << "û�ҵ�" << endl;
	}

		map<string, int,MyCompare>m2;
		m2.insert(pair<string, int>("С��", 11));
		m2.insert(pair<string, int>("С��", 10));
		m2.insert(pair<string, int>("С��", 12));
		m2.insert(pair<string, int>("С��", 13));
		printMap(m2);


}
int main14() {
	mtest();
	system("pause");
	return 0;
}