#include<iostream>
using namespace std;

/*
	set的基本概念（集合容器）
	set容器在插入数据的时候，会进行自动排序。
	set和multiset是属于关联式容器，底层是二叉树

	区别：
	set不允许有重复元素
	multiset允许有重复元素

	set的大小操作：empty和size和swap之前一致，删除是erase，clear也是一致的。
	erase可以通过迭代器删除，或者指定删除，删除之前会进行排序
*/
#include <set>
void printSet(set<int>&s) {
	for (set<int>::iterator iset = s.begin(); iset != s.end(); iset++) {
		cout << *iset << "\t";
	}
	cout << endl;
}
void printSet(multiset<int>&s) {
	for (multiset<int>::iterator iset = s.begin(); iset != s.end(); iset++) {
		cout << *iset << "\t";
	}
	cout << endl;
}
//自定义修改排序规则
class MyCompare {
public:
	bool operator()(int v1,int v2) {
		return v1 > v2;
	}


};
void printSet(set<int,MyCompare>&s) {
	for (set<int,MyCompare>::iterator iset = s.begin(); iset != s.end(); iset++) {
		cout << *iset << "\t";
	}
	cout << endl;
}
void sstest1() {
	set<int> s1;
	s1.insert(3);
	s1.insert(8);
	s1.insert(1);
	s1.insert(2);
	s1.insert(9);
	s1.insert(10);//set只有insert的插入方式
	printSet(s1);



	//查找操作。find。可以理解为是通过迭代器查找数组，找到返回位置，
	//找不到返回最后一个数字位置
	set<int>::iterator ss=s1.find(8);//s1.find(7);
	if (ss != s1.end()) {
		cout << "find" <<endl;
	}
	else {
		cout << " not find" << endl;
	}
	int i = s1.count(10);//即使有多个10也是i=1，i只有0，1的可能，因为自动去重。

	set<int,MyCompare> s2;//利用仿函数修改排序规则
	s2.insert(3);
	s2.insert(8);
	s2.insert(1);
	s2.insert(2);
	s2.insert(9);
	s2.insert(10);//set只有insert的插入方式
	printSet(s2);
}

void mutlsettest1() {
	multiset<int> mset;
	mset.insert(10);
	mset.insert(20);
	mset.insert(30);
	mset.insert(9);
	mset.insert(10);
	mset.insert(20);
	printSet(mset);
}
int main11() {
	sstest1();
	mutlsettest1();
	system("pause");
	return 0;
}