#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
/*
	set_intersection//求两个容器的交集
	set_union//求两个容器的并集
	set_difference//求两个容器的差集

*/

class msset {
public:
	bool operator()(int val,int val2) {
		return val == val2;
	}

};
void llls(int val) {
	cout << val << "  ";
}
int main() {
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for (int i = 5; i < 19; i++) {
		v2.push_back(i);
	}
	vector<int>v3;
	v3.resize(v1.size()<v2.size()?v1.size():v2.size());
	set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	for_each(v3.begin(), v3.end(), llls);
	cout << endl;
	vector<int>v4;
	v4.resize(v1.size() + v2.size());
	set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
	for_each(v4.begin(), v4.end(), llls);

	cout << endl;
	vector<int>v5;
	v5.resize(v1.size() + v2.size());
	set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v5.begin());
	for_each(v5.begin(), v5.end(), llls);


	system("pause");
	return 0;

}