#include<iostream>
using namespace std;
/*
	函数对象的概念：
	重载函数调用操作符的类，其对象被成为函数对象
	函数对象使用重载的（）时候，行为类似函数调用，也成为仿函数

	函数对象和仿函数是一个类

	函数对象的调用
	特点：
	函数对象在调用的时候,可以想普通函数那样调用，可以有参数，可以有返回值
	函数对象超出普通函数的概念，函数对象可以有自己的状态
	函数对象可以作为参数传递
*/

//仿函数用于记录自己的状态
#include<string>
class Myprint {
public:
	int m_count;
	Myprint() {
		this->m_count = 0;
	}
	void operator()(string text) {
		cout << text<< endl;
		this->m_count++;
	}

};
//函数对象作为参数传递
void domyself(Myprint &my,string text) {
	my(text);
}
void  hantest1() {
	Myprint my;
	domyself(my,"busy");
	my("调用");
	my("调用");
	my("调用");
	my("调用");
	cout<<my.m_count << endl;
}

int main15() {
	hantest1();
	system("pause");
	return 0;
}