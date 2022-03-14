#include <iostream>
using namespace std;
/*
	deque
	˫�����飬���Զ�ͷ�˽��в���ɾ������

	deque��vector������
	vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
	deque����ڶ��ԣ�����ͷ���Ĳ���ɾ���ٶȱ�vector��
	vector����Ԫ�ص��ٶȴ���deque

	deque���ڲ���һ���п�����ά��ÿ�λ����������ݣ��п���ά������ÿ���������ĵ�ַ
	deque�ĵ�����Ҳ֧���������
	deque������vector����ֵҲ��=��assign��empty��size��resizeһ�¡�
	dequeû�������ĸ���
	ͷfront βback
*/
#include <deque>
void dprint(deque<int >&d) {
	//const_iterator ֻ��������
	for (deque<int>::iterator dq = d.begin(); dq != d.end(); dq++) {
		cout << *dq << "\t ";
		
	}
	cout << endl;
}
void dtest1() {
	deque<int >d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	dprint(d1);
	cout << d1.at(1) << "\t" << d1[2] << endl;
	cout << d1.front() << "\t" << d1.back() << endl;
}
#include <algorithm>
void dtest2() {
	deque<int>d2;
	d2.push_back(100);
	d2.push_back(200);
	d2.push_back(40);
	d2.push_back(99);
	d2.push_back(10);
	d2.push_back(890);
	d2.push_back(70);
	d2.push_back(20);
	sort(d2.begin(), d2.end());
	dprint(d2);
	
}
int main7() {
	dtest2();
	system("pause");
	return 0;
}