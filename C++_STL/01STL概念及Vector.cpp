#include <iostream>
using namespace std;
/*
	STL�����Ϸ�Ϊ���������㷨�͵�����
	�������㷨֮��ʹ�õ����������޷��ν�
	STL��Ϊ���������
	���������㷨�����������º�����������������������ռ�������
	������Ҫע��ǰ�ĸ����

	STL�������ǽ�������㷺�����ݽṹʵ�ֳ���
	�����ַ�Ϊ����ʽ�����͹���ʽ����

	�㷨���ַ�Ϊ�ʱ��㷨�ͷ��ʱ��㷨
	�ʱ�ͷ��ʱ����������������������Ƿ����������ڵ�Ԫ������

	���������������㷨֮��Ľ�ϼ���ÿ�����������Լ�ר���ĵ�����
	���õ�����������Ϊ˫���������������ʵ�����
	 
*/

/*
	������Vector
	�㷨��for_each
	������vector<int>::iterator
*/
#include <vector>
#include <algorithm>
void myprintf(int val) {
	cout << val << endl;
}
void test01() {
	//������һ��Vector��������
	vector<int>v;
	//��������������,β�巨
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);

	//1��ͨ�����������������е�����
	/*vector<int>::iterator  itbegin= v.begin();
	vector<int>::iterator  itend = v.end(); 
	while (itbegin != itend) {
		cout << *itbegin << endl;
		itbegin++;
	}*/

	//2���ڶ���
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}*/

	//3������STL�еı�׼�㷨
	for_each(v.begin(), v.end(), myprintf);

}
int main1() {

	test01();
	system("pause");
	return 0;

}