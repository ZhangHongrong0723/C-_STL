#include <iostream>
using namespace std;

/*
	vector���������飬Ҳ��Ϊ��������
	��֮ͬ������vector�ǿ��Զ�̬��չ�ģ��������Ǿ�̬��
	��̬��չ������ԭ�л������ռ䣬�����ҵ�һ�����Ŀռ䣬��ԭ�����ݿ���
	�����ͷ�ԭ�пռ�
	v.begin��ָ���һ��Ԫ�أ�v.rbegin��ָ���һ��Ԫ�ص�ǰһ��λ
	v.endָ��������һ��Ԫ�صĺ�һλ��v.rendָ��������һ��Ԫ��
	v.insert�ǲ����м�һ��Ԫ�أ�push_back��pop_back�ǵ��˽���������ȡ��

	vector�ĵ�������֧��������ʵĵ�����

	vector�ĸ�ֵ������=��ֵ��assign����

	vector����ط�����
	empty�п�
	capacity����������
	size����������Ԫ�صĸ���
	resize��int num������ָ��������С�����Ĭ��ֵ��䣬��Сɾ���������ֵ
	resize��int num,int elem������ָ��������С�����elem��䣬��Сɾ���������ֵ
*/

#include <vector>
void printvtest1(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
		
	}
	cout << endl;
}
void vtest1() {
	vector<int >v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	printvtest1(v);

	vector<int>v2(v.begin(), v.end());
	printvtest1(v2);

	vector<int>v3(10,100);//10��100
	printvtest1(v3);
}
int main5() {
	vtest1();


	system("pause");
	return 0;
}