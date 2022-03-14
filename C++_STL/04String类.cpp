#include <iostream>
using namespace std;

/*
	String 和 char的区别
	·char *是一个指针
	·string是一个类，内部封装了char*，管理这个字符串，是一个char*形的容器
*/

/*
	string的构造函数 
	string()；创建一个空字符串，如string str；
	string（const string &str）使用一个string对象初始化另一个string对象
	string（int n，char c）使用n个字符c初始化
	string（const char* s）使用字符串s初始化
	
	例如：const char *s="ssss"
		string s1(s);

	string的赋值操作，除了=可以赋值。也可以通过.assign赋值，如string s1.assign("hello");

	string的拼接操作，除了可以用+=，也可以通过append操作
	特殊，append（const string &s,int pos,int n）.开始的第pos位置的后面n个字符
	
	string的查找操作
	find 查找第一次出现的位置，如果不指定位置默认从0开始，rfind查找最后一次出现的位置
	replace替换操作

	字符串比较操作
	compare =返回0；>返回1;<返回-1；按照ascii码比较 第一个减去第二个

	字符存取操作
	使用[]访问单个字符，at符号访问单个字符 .也可以对其进行修改，括号中放位置

	字符串插入和删除操作
	insert插入 erase删除

	字符串的获取子串操作
*/
#include <string>
int main4() {
	string str = "hello";
	string strSub = str.substr(1, 3);
	cout << strSub << endl;
	//实用操作
	string email = "zhangsan@qq.con";
	int pos = email.find("@");
	string subemail = email.substr(0, pos );
	cout << subemail << endl;

	system("pause");
	return 0;
}