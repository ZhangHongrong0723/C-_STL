#include <iostream>
using namespace std;

/*
	String �� char������
	��char *��һ��ָ��
	��string��һ���࣬�ڲ���װ��char*����������ַ�������һ��char*�ε�����
*/

/*
	string�Ĺ��캯�� 
	string()������һ�����ַ�������string str��
	string��const string &str��ʹ��һ��string�����ʼ����һ��string����
	string��int n��char c��ʹ��n���ַ�c��ʼ��
	string��const char* s��ʹ���ַ���s��ʼ��
	
	���磺const char *s="ssss"
		string s1(s);

	string�ĸ�ֵ����������=���Ը�ֵ��Ҳ����ͨ��.assign��ֵ����string s1.assign("hello");

	string��ƴ�Ӳ��������˿�����+=��Ҳ����ͨ��append����
	���⣬append��const string &s,int pos,int n��.��ʼ�ĵ�posλ�õĺ���n���ַ�
	
	string�Ĳ��Ҳ���
	find ���ҵ�һ�γ��ֵ�λ�ã������ָ��λ��Ĭ�ϴ�0��ʼ��rfind�������һ�γ��ֵ�λ��
	replace�滻����

	�ַ����Ƚϲ���
	compare =����0��>����1;<����-1������ascii��Ƚ� ��һ����ȥ�ڶ���

	�ַ���ȡ����
	ʹ��[]���ʵ����ַ���at���ŷ��ʵ����ַ� .Ҳ���Զ�������޸ģ������з�λ��

	�ַ��������ɾ������
	insert���� eraseɾ��

	�ַ����Ļ�ȡ�Ӵ�����
*/
#include <string>
int main4() {
	string str = "hello";
	string strSub = str.substr(1, 3);
	cout << strSub << endl;
	//ʵ�ò���
	string email = "zhangsan@qq.con";
	int pos = email.find("@");
	string subemail = email.substr(0, pos );
	cout << subemail << endl;

	system("pause");
	return 0;
}