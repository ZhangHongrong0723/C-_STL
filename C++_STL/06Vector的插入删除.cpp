#include<iostream>
using namespace std;
#include <vector>
//插入和删除
void printvtest2(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";

	}
	cout << endl;
}
void vtest02() {
	
	vector<int >v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	printvtest2(v);
	v.pop_back();
	printvtest2(v);
	v.insert(v.begin(), 100);
	printvtest2(v);
	v.insert(v.begin(), 2, 1000);
	printvtest2(v);
	v.erase(v.begin());//删除一个
	printvtest2(v);
	cout << v.capacity() << endl;

	cout << v.at(3) <<"\t"<<v[3]<< endl;//获取第三个元素
	cout << v.front() << "\t" << v.back() << endl;//获取首尾元素

	vector<int>v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	printvtest2(v2);
	v.swap(v2);//实现两个容器之间进行互换操作
	printvtest2(v2);
	printvtest2(v);

}

//swap的实际用途，可以将其收缩内存
void vtest2() {
	vector<int>v3;
	for (int i = 0; i < 10000; i++) {
		v3.push_back(i);
	
	}
	cout << v3.capacity() << "大小\t"<<v3.size()<<endl;
	v3.resize(3);//收缩容器
	cout << v3.capacity() << "大小\t" << v3.size() << endl;
	vector<int>(v3).swap(v3);
	cout << v3.capacity() << "大小\t" << v3.size() << endl;
	//reserve(int n)预留空间,预留容器中的空间，减少动态拓展的次数
}
int main6() {
	vtest2();

	system("pause");
	return 0;
}