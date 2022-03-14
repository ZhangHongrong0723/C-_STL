#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

/*
	查找算法：
	find()//查找元素
	find_if()//按条件查找元素
	adjacent_find()//查找相邻重复元素
	binary_search()//二分查找法  //返回的是一个true或者false；并且必须有序
	count()//统计元素个数
	count_if()//按条件查找元素个数
*/
class Animal {
public:
	int m_num;
	string m_name;
	Animal(string name,int num) {
		this->m_name = name;
		this->m_num = num;
	}

	bool operator==(const Animal &an) {
		if (this->m_name == an.m_name&&this->m_num == an.m_num) {
			return true;
		}
		else {
			return false;
		}
	}


};

class Greater20 {
public:
	bool operator()(const Animal&an) {
		return an.m_num > 20;
	}

};
void anitest() {
	vector<Animal>ve;
	Animal a1("猪", 10);
	Animal a2("猫", 20);
	Animal a3("鸟", 30);
	Animal a4("挤", 20);

	ve.push_back(a1);
	ve.push_back(a2);
	ve.push_back(a3);
	//ve.push_back(a4);

	vector<Animal>::iterator it = find(ve.begin(), ve.end(), a4);
	if (it == ve.end()) {
		cout << "没找到" << endl;
	}
	else {

		cout << "找到" << endl;
	}

	vector<Animal>::iterator its = find_if(ve.begin(), ve.end(), Greater20());
	if (its == ve.end()) {
		cout << "大于没找到" << endl;
	}
	else {

		cout << "大于找到:  " <<(*its).m_name<< endl;
	}
	vector<Animal>::iterator itad= adjacent_find(ve.begin(), ve.end());//查找相邻重复元素
	if (itad == ve.end()) {
		cout << "没有" << endl;
	}
	else {

		cout << "有:  " << endl;
	}

	vector<int>ive;
	ive.push_back(5);
	ive.push_back(4);
	ive.push_back(9);
	ive.push_back(2);
	ive.push_back(1);
	sort(ive.begin(),ive.end());
	bool flag=binary_search(ive.begin(), ive.end(), 1);
	if (flag) {
		cout << "found" << endl;
	}
	else {
		cout << "not found" << endl;
	}
	int s=count(ve.begin(), ve.end(), a4);//统计自定义数据类型有多少个。类似于find。需要重写==
	int n = count_if(ve.begin(), ve.end(), Greater20());//也类似于find_if
	cout << s << endl;
	cout << n << endl;
}
int main19() {
	anitest();

	//system("pause");
	return 0;
}