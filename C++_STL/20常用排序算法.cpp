#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
sort算法：对容器内元素进行排序
random_shuffle算法：洗牌，指定范围内的元素随机调整次序
merge算法：容器元素合并，并且存储到另一容器中
reverse算法：反转指定范围的元素
*/

void  printfs(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "\t";
	}
}

void  printfs2(int val) {
	cout << val << endl;
}
void sorttest(vector<int>&v) {
	sort(v.begin(),v.end());//
	printfs(v);
	
}
void rantest(vector<int>&v) {
	random_shuffle(v.begin(), v.end());
	printfs(v);
}
void metest(vector<int> v1,vector<int>&v) {
	vector<int>v2;
	v2.resize(v.size() + v1.size());
	sort(v1.begin(), v1.end());
	sort(v.begin(), v.end());
	merge(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());
	for_each(v2.begin(),v2.end(),printfs2);
	//printfs(v2);
}
void revtest(vector<int>&v) {
	reverse(v.begin(),v.end());
	printfs(v);
}

void vvs() {
	vector<int>v;
	v.push_back(1);
	v.push_back(7);
	v.push_back(9);
	v.push_back(22);
	v.push_back(5);
	v.push_back(10);
	v.push_back(9478);
	v.push_back(3);

	vector<int>v2;
	v.push_back(88);
	v.push_back(777);
	v.push_back(54);
	
	sorttest(v);
	cout << endl;
	rantest(v);
	cout << endl;
	metest(v,v2);
	cout << endl;
	revtest(v);
	
}
int main20() {
	vvs();

	system("pause");
	return 0;
}