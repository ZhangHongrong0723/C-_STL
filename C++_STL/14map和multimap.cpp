#include <iostream>
using namespace std;
#include <map>
#include <string>
/*
	map中的元素都是属于pair对组
	pair中的第一个元素是key（键值），作为索引而存在，第二个元素是value（实值）
	所有元素根据元素的键值自动排序

	multimap和map都是属于关联式容器，底层结构是二叉树实现

	两者都可以通过键值找到value值
	map不允许重复的key值，multimap允许有重复键值，value是可以有重复的

	map中的可以有empty和size，swap的操作,insert,erase,clear的操作，
	查找和统计操作和set是一样的
	find返回迭代器位置。count不是0就是1.

*/
void printMap(map<string,int>&m) {
	for (map<string, int>::iterator itmap = m.begin(); itmap != m.end(); itmap++) {
		cout << "key=" << (*itmap).first << "\t value=" << itmap->second<<"\t"; 
	}
	cout << endl;
}
class MyCompare {
public:
	bool operator()(string v1,string v2) {
		return v1 > v2;
	}

};

void printMap(map<string, int,MyCompare>&m) {
	for (map<string, int>::iterator itmap = m.begin(); itmap != m.end(); itmap++) {
		cout << "key=" << (*itmap).first << "\t value=" << itmap->second << "\t";
	}
	cout << endl;
}
void mtest() {
	map<string, int>m1;
	m1.insert(pair<string, int>("小白", 11));
	m1.insert(pair<string, int>("小黑", 10));
	m1.insert(pair<string, int>("小绿", 12));
	m1.insert(pair<string, int>("小红", 13));
	printMap(m1);

	map<string, int>::iterator is = m1.find("小ll");
	if (is != m1.end()) {
		cout << "找到" << endl;
	}
	else {
		cout << "没找到" << endl;
	}

		map<string, int,MyCompare>m2;
		m2.insert(pair<string, int>("小白", 11));
		m2.insert(pair<string, int>("小黑", 10));
		m2.insert(pair<string, int>("小绿", 12));
		m2.insert(pair<string, int>("小红", 13));
		printMap(m2);


}
int main14() {
	mtest();
	system("pause");
	return 0;
}