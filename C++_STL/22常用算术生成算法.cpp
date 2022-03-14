#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <algorithm>
/*
	需要包含头文件numeric

	算法：
	accumulate//计算容器元素累计总和
	fill//向容器中添加元素
*/
void pps(int val) {
	cout << val << endl;
}
void numtest() {
	vector<int>v10;
	for (int i = 0; i <= 100; i++) {
		v10.push_back(i);
	}
	//第三个参数是初始值，也可以理解为int i=0；
	int total=accumulate(v10.begin(), v10.end(), 0);
	cout << "total:  " << total << endl;
	vector<int>v2;
	v2.resize(10);
	fill(v2.begin(), v2.end(), 33);
	for_each(v2.begin(), v2.end(), pps);
}
int main22() {

	numtest();

	system("pause");
	return 0;
}