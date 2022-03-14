#include <iostream>
using namespace std;
/*
	STL广义上分为：容器、算法和迭代器
	容器和算法之间使用迭代器进行无缝衔接
	STL分为六大组件；
	·容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
	开发主要注重前四个组件

	STL容器就是将运用最广泛的数据结构实现出来
	容器又分为序列式容器和关联式容器

	算法中又分为质变算法和非质变算法
	质变和非质变的区别在于在运算过程中是否会更改区间内的元素内容

	迭代器是容器和算法之间的结合剂，每个容器都有自己专属的迭代器
	常用的容器迭代器为双向迭代器和随机访问迭代器
	 
*/

/*
	容器：Vector
	算法：for_each
	迭代器vector<int>::iterator
*/
#include <vector>
#include <algorithm>
void myprintf(int val) {
	cout << val << endl;
}
void test01() {
	//创建了一个Vector容器数组
	vector<int>v;
	//向容器插入数据,尾插法
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);
	v.push_back(50);

	//1、通过迭代器访问容器中的数据
	/*vector<int>::iterator  itbegin= v.begin();
	vector<int>::iterator  itend = v.end(); 
	while (itbegin != itend) {
		cout << *itbegin << endl;
		itbegin++;
	}*/

	//2、第二种
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}*/

	//3、利用STL中的标准算法
	for_each(v.begin(), v.end(), myprintf);

}
int main1() {

	test01();
	system("pause");
	return 0;

}