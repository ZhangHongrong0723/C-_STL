#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

/*
	�����㷨��
	find()//����Ԫ��
	find_if()//����������Ԫ��
	adjacent_find()//���������ظ�Ԫ��
	binary_search()//���ֲ��ҷ�  //���ص���һ��true����false�����ұ�������
	count()//ͳ��Ԫ�ظ���
	count_if()//����������Ԫ�ظ���
*/
class Animal {
public:
	int m_num;
	string m_name;
	Animal(string name,int num) {
		this->m_name = name;
		this->m_num = num;
	}

	bool operator==(const Animal &an) {
		if (this->m_name == an.m_name&&this->m_num == an.m_num) {
			return true;
		}
		else {
			return false;
		}
	}


};

class Greater20 {
public:
	bool operator()(const Animal&an) {
		return an.m_num > 20;
	}

};
void anitest() {
	vector<Animal>ve;
	Animal a1("��", 10);
	Animal a2("è", 20);
	Animal a3("��", 30);
	Animal a4("��", 20);

	ve.push_back(a1);
	ve.push_back(a2);
	ve.push_back(a3);
	//ve.push_back(a4);

	vector<Animal>::iterator it = find(ve.begin(), ve.end(), a4);
	if (it == ve.end()) {
		cout << "û�ҵ�" << endl;
	}
	else {

		cout << "�ҵ�" << endl;
	}

	vector<Animal>::iterator its = find_if(ve.begin(), ve.end(), Greater20());
	if (its == ve.end()) {
		cout << "����û�ҵ�" << endl;
	}
	else {

		cout << "�����ҵ�:  " <<(*its).m_name<< endl;
	}
	vector<Animal>::iterator itad= adjacent_find(ve.begin(), ve.end());//���������ظ�Ԫ��
	if (itad == ve.end()) {
		cout << "û��" << endl;
	}
	else {

		cout << "��:  " << endl;
	}

	vector<int>ive;
	ive.push_back(5);
	ive.push_back(4);
	ive.push_back(9);
	ive.push_back(2);
	ive.push_back(1);
	sort(ive.begin(),ive.end());
	bool flag=binary_search(ive.begin(), ive.end(), 1);
	if (flag) {
		cout << "found" << endl;
	}
	else {
		cout << "not found" << endl;
	}
	int s=count(ve.begin(), ve.end(), a4);//ͳ���Զ������������ж��ٸ���������find����Ҫ��д==
	int n = count_if(ve.begin(), ve.end(), Greater20());//Ҳ������find_if
	cout << s << endl;
	cout << n << endl;
}
int main19() {
	anitest();

	//system("pause");
	return 0;
}