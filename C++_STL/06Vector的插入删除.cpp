#include<iostream>
using namespace std;
#include <vector>
//�����ɾ��
void printvtest2(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";

	}
	cout << endl;
}
void vtest02() {
	
	vector<int >v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	printvtest2(v);
	v.pop_back();
	printvtest2(v);
	v.insert(v.begin(), 100);
	printvtest2(v);
	v.insert(v.begin(), 2, 1000);
	printvtest2(v);
	v.erase(v.begin());//ɾ��һ��
	printvtest2(v);
	cout << v.capacity() << endl;

	cout << v.at(3) <<"\t"<<v[3]<< endl;//��ȡ������Ԫ��
	cout << v.front() << "\t" << v.back() << endl;//��ȡ��βԪ��

	vector<int>v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	printvtest2(v2);
	v.swap(v2);//ʵ����������֮����л�������
	printvtest2(v2);
	printvtest2(v);

}

//swap��ʵ����;�����Խ��������ڴ�
void vtest2() {
	vector<int>v3;
	for (int i = 0; i < 10000; i++) {
		v3.push_back(i);
	
	}
	cout << v3.capacity() << "��С\t"<<v3.size()<<endl;
	v3.resize(3);//��������
	cout << v3.capacity() << "��С\t" << v3.size() << endl;
	vector<int>(v3).swap(v3);
	cout << v3.capacity() << "��С\t" << v3.size() << endl;
	//reserve(int n)Ԥ���ռ�,Ԥ�������еĿռ䣬���ٶ�̬��չ�Ĵ���
}
int main6() {
	vtest2();

	system("pause");
	return 0;
}