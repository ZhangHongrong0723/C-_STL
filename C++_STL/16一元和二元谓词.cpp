#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
 /*
	返回值为bool类型的仿函数称为谓词
	而operator ()中的参数一个为一元谓词，两个为二元谓词
 */
class pan {
public:
	bool operator()(string text) {
		if (text == "小黑") {
			return true;
		}
		else {
			return false;
		}
	}
	//二元谓词，修改排序，之前用过
	bool operator()(int val1,int val2) {
		return val1 > val2;
	}

};
void vectest() {
	vector<string>vec;
	vec.push_back("小白");
	vec.push_back("小黑");
	vec.push_back("小红");
	vec.push_back("小绿");
	vec.push_back("小蓝");

	vector<string>::iterator it=find_if(vec.begin(), vec.end(),pan());
	if (it == vec.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "find   " << *it << endl;
	}

	

}
int main16() {
	vectest();

	system("pause");
	return 0;
}