#include <iostream>
using namespace std;

/*
	vector类似于数组，也称为单端数组
	不同之处在于vector是可以动态拓展的，数组则是静态的
	动态拓展不是在原有基础扩空间，而是找到一块更大的空间，将原有数据拷贝
	并且释放原有空间
	v.begin是指向第一个元素，v.rbegin是指向第一个元素的前一个位
	v.end指向的是最后一个元素的后一位，v.rend指向的是最后一个元素
	v.insert是插入中间一个元素，push_back和pop_back是单端进行新增和取出

	vector的迭代器是支持随机访问的迭代器

	vector的赋值操作有=赋值和assign两种

	vector的相关方法：
	empty判空
	capacity容器的容量
	size返回容器中元素的个数
	resize（int num）重新指定容器大小，变大默认值填充，变小删除后面的数值
	resize（int num,int elem）重新指定容器大小，变大elem填充，变小删除后面的数值
*/

#include <vector>
void printvtest1(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
		
	}
	cout << endl;
}
void vtest1() {
	vector<int >v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	printvtest1(v);

	vector<int>v2(v.begin(), v.end());
	printvtest1(v2);

	vector<int>v3(10,100);//10个100
	printvtest1(v3);
}
int main5() {
	vtest1();


	system("pause");
	return 0;
}