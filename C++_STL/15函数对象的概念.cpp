#include<iostream>
using namespace std;
/*
	��������ĸ��
	���غ������ò��������࣬����󱻳�Ϊ��������
	��������ʹ�����صģ���ʱ����Ϊ���ƺ������ã�Ҳ��Ϊ�º���

	��������ͷº�����һ����

	��������ĵ���
	�ص㣺
	���������ڵ��õ�ʱ��,��������ͨ�����������ã������в����������з���ֵ
	�������󳬳���ͨ�����ĸ����������������Լ���״̬
	�������������Ϊ��������
*/

//�º������ڼ�¼�Լ���״̬
#include<string>
class Myprint {
public:
	int m_count;
	Myprint() {
		this->m_count = 0;
	}
	void operator()(string text) {
		cout << text<< endl;
		this->m_count++;
	}

};
//����������Ϊ��������
void domyself(Myprint &my,string text) {
	my(text);
}
void  hantest1() {
	Myprint my;
	domyself(my,"busy");
	my("����");
	my("����");
	my("����");
	my("����");
	cout<<my.m_count << endl;
}

int main15() {
	hantest1();
	system("pause");
	return 0;
}