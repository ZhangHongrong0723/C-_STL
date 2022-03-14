#include<iostream>
using namespace std;
/*
	在C中，指针和自增自减属于同一等级，所以指针自增没有用处	

	拷贝算法
	copy：//容器内指定范围的元素拷贝到另一元素中
	replace：//将容器内指定范围内的旧元素修改为新元素
	replace_if://容器内指定范围满足条件的元素替换为新元素
	swap：//互换两个容器的元素

*/

//struct S {
//	int n;
//	char c[10];
//
//} *p;
#include <vector>
#include <algorithm>

class mps {
public:
	int operator ()(int val) {
		return val > 15 ;
	}

};
void coprintfs(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << "  ";
	}
}
void cotest() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	vector <int>v2;
	v2.resize(v1.size());
	copy(v1.begin(),v1.end(),v2.begin());

	vector<int>v3;
	for (int i = 10; i < 20; i++) {
		v3.push_back(i);
	}
	replace(v3.begin(),v3.end(),12,999);
	
	cout << "v1:" << endl;
	coprintfs(v1);
	cout << endl;
	cout << "v2:" << endl;
	coprintfs(v2);
	cout << endl;
	cout << "v3:" << endl;
	coprintfs(v3);

	replace_if(v3.begin(), v3.end(), mps(),40);
	cout << endl;
	cout << "v3:" << endl;
	coprintfs(v3);
	swap(v1, v3);
	cout << endl;
	cout << "v1:" << endl;
	coprintfs(v1);
	cout << endl;
	cout << "v3:" << endl;
	coprintfs(v3);
}
int main21() {
	//S s[3] = { {3,"abc"},{5,"def"},{9,"ghi"} };
	//p = s;
	//printf("%d\n",p->n);
	//printf("%d",(p++)->n);
	//printf("%d\n", p->n);
	cotest();
	system("pause");

	return 0;
}
