#include <iostream>
using namespace std;
/*
	list 可对任意的位置进行插入和删除
	分为指针域和数据域
	STL中的链表是一个双向循环链表，所以其中的迭代器支持前移和后移，属于双向迭代器
	不支持随机访问
	list的迭代器和构造函数基本与vector相似
	赋值可以用= assign 交换swap
	大小和判空基本一致
	list的插入和删除基本都是一致的，因为是双向的，所以可以在头尾进行
*/
#include <list>
void printList(list<int>&l) {
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << "\t";
	}
	cout << endl;
}
void Ltest1() {
	list<int>l1;
	l1.push_back(1);
	l1.push_back(3);
	l1.push_back(2);
	l1.push_back(4);
	l1.push_back(2);
	printList(l1);
	l1.remove(2);//匹配所有数据为2的数值，进行删除
	printList(l1);
	//链表种也具有反转和排序操作，sort中的排序根据其中的数据量大小进行选择算法

}
int main10() {
	Ltest1();
	system("pause");
	return 0;
}