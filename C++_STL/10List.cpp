#include <iostream>
using namespace std;
/*
	list �ɶ������λ�ý��в����ɾ��
	��Ϊָ�����������
	STL�е�������һ��˫��ѭ�������������еĵ�����֧��ǰ�ƺͺ��ƣ�����˫�������
	��֧���������
	list�ĵ������͹��캯��������vector����
	��ֵ������= assign ����swap
	��С���пջ���һ��
	list�Ĳ����ɾ����������һ�µģ���Ϊ��˫��ģ����Կ�����ͷβ����
*/
#include <list>
void printList(list<int>&l) {
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << "\t";
	}
	cout << endl;
}
void Ltest1() {
	list<int>l1;
	l1.push_back(1);
	l1.push_back(3);
	l1.push_back(2);
	l1.push_back(4);
	l1.push_back(2);
	printList(l1);
	l1.remove(2);//ƥ����������Ϊ2����ֵ������ɾ��
	printList(l1);
	//������Ҳ���з�ת�����������sort�е�����������е���������С����ѡ���㷨

}
int main10() {
	Ltest1();
	system("pause");
	return 0;
}