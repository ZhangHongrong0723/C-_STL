#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <algorithm>
/*
	��Ҫ����ͷ�ļ�numeric

	�㷨��
	accumulate//��������Ԫ���ۼ��ܺ�
	fill//�����������Ԫ��
*/
void pps(int val) {
	cout << val << endl;
}
void numtest() {
	vector<int>v10;
	for (int i = 0; i <= 100; i++) {
		v10.push_back(i);
	}
	//�����������ǳ�ʼֵ��Ҳ�������Ϊint i=0��
	int total=accumulate(v10.begin(), v10.end(), 0);
	cout << "total:  " << total << endl;
	vector<int>v2;
	v2.resize(10);
	fill(v2.begin(), v2.end(), 33);
	for_each(v2.begin(), v2.end(), pps);
}
int main22() {

	numtest();

	system("pause");
	return 0;
}