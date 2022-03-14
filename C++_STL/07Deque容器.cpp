#include <iostream>
using namespace std;
/*
	deque
	双端数组，可以对头端进行插入删除操作

	deque与vector的区别
	vector对于头部的插入删除效率低，数据量越大效率越低
	deque相对于而言，对于头部的插入删除速度比vector快
	vector访问元素的速度大于deque

	deque的内部有一个中控器，维护每段缓冲区的内容，中控器维护的是每个缓冲区的地址
	deque的迭代器也支持随机访问
	deque类似于vector，赋值也是=，assign，empty，size，resize一致。
	deque没有容量的概念
	头front 尾back
*/
#include <deque>
void dprint(deque<int >&d) {
	//const_iterator 只读迭代器
	for (deque<int>::iterator dq = d.begin(); dq != d.end(); dq++) {
		cout << *dq << "\t ";
		
	}
	cout << endl;
}
void dtest1() {
	deque<int >d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	dprint(d1);
	cout << d1.at(1) << "\t" << d1[2] << endl;
	cout << d1.front() << "\t" << d1.back() << endl;
}
#include <algorithm>
void dtest2() {
	deque<int>d2;
	d2.push_back(100);
	d2.push_back(200);
	d2.push_back(40);
	d2.push_back(99);
	d2.push_back(10);
	d2.push_back(890);
	d2.push_back(70);
	d2.push_back(20);
	sort(d2.begin(), d2.end());
	dprint(d2);
	
}
int main7() {
	dtest2();
	system("pause");
	return 0;
}