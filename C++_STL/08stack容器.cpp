#include <iostream>
using namespace std;
/*
	stack��һ���Ƚ���������ݽṹ��ջ
	ջ�������������Ϊ
	��ջpush  ��ջpop
*/
#include <stack>
void stest1(){
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	while (!s.empty()) {
		cout << "ջ��ָ��" << s.top() << endl;
		s.pop();	
		cout << s.size() << endl;
	
	}

}
int main8() {

	stest1();

	system("pause");
	return 0;
}