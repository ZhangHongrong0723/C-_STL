#include <iostream>
using namespace std;
/*
	STL�ڽ���һЩ��������

	�����º�������ϵ�º������߼��º���

	�÷���
	��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
	ʹ���ڽ�����������Ҫ����ͷ�ļ�#include<functional>

	�����º�����
	ʵ����������
	����negate��һԪ���㡢�����Ķ��Ƕ�Ԫ����

	template<class T>plus<T>//�ӷ��º���	
	template<class T>minus<T>//�����º���
	template<class T>multiplies<T>//�˷��º���
	template<class T>divides<T>//�����º���
	template<class T>modulus<T>//ȡģ�º���
	template<class T>negate<T>//ȡ���º���

	��ϵ�º�����
	ʵ�ֹ�ϵ�Ա�
	template<class T>bool equal_to<T>//����	
	template<class T>bool not_equal_to<T>//������
	template<class T>bool greater<T>//����
	template<class T>bool greater_equal<T>//���ڵ���
	template<class T>bool less<T>//С��
	template<class T>bool less_equal<T>//С�ڵ���

	�߼��º����������ò���
	template<class T>boollogical_and<T>//�߼���
	template<class T>boollogical_or<T>//�߼���
	template<class T>boollogical_not<T>//�߼���
*/
#include <functional>
#include <vector>
#include <algorithm>
int main17() {

	negate<int>n;
	cout << n(20) << endl;

	plus<int>m;
	cout << m(10, 20) << endl;

	vector <int>v1;
	v1.push_back(10);
	v1.push_back(9);
	v1.push_back(20);
	v1.push_back(80);
	sort(v1.begin(), v1.end(), greater<int>());
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << endl;
	}

	vector<bool>v2;
	v2.resize(v1.size());
	transform(v1.begin(),v1.end(),v2.begin(),logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << endl;
	}
	
	
	 


	system("pause");
	return 0;
}
