#include <iostream>
using namespace std;
/*
	STL内建了一些函数对象

	算术仿函数、关系仿函数、逻辑仿函数

	用法：
	这些仿函数所产生的对象，用法和一般函数完全相同
	使用内建函数对象、需要引入头文件#include<functional>

	算术仿函数：
	实现四则运算
	其中negate是一元运算、其他的都是二元运算

	template<class T>plus<T>//加法仿函数	
	template<class T>minus<T>//减法仿函数
	template<class T>multiplies<T>//乘法仿函数
	template<class T>divides<T>//除法仿函数
	template<class T>modulus<T>//取模仿函数
	template<class T>negate<T>//取反仿函数

	关系仿函数：
	实现关系对比
	template<class T>bool equal_to<T>//等于	
	template<class T>bool not_equal_to<T>//不等于
	template<class T>bool greater<T>//大于
	template<class T>bool greater_equal<T>//大于等于
	template<class T>bool less<T>//小于
	template<class T>bool less_equal<T>//小于等于

	逻辑仿函数：基本用不上
	template<class T>boollogical_and<T>//逻辑与
	template<class T>boollogical_or<T>//逻辑或
	template<class T>boollogical_not<T>//逻辑非
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
