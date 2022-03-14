#include <iostream>
using namespace std;
/*
	stack是一个先进后出的数据结构，栈
	栈不允许遍历的行为
	入栈push  出栈pop
*/
#include <stack>
void stest1(){
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	while (!s.empty()) {
		cout << "栈顶指针" << s.top() << endl;
		s.pop();	
		cout << s.size() << endl;
	
	}

}
int main8() {

	stest1();

	system("pause");
	return 0;
}