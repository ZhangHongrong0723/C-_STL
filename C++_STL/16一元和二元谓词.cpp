#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
 /*
	����ֵΪbool���͵ķº�����Ϊν��
	��operator ()�еĲ���һ��ΪһԪν�ʣ�����Ϊ��Ԫν��
 */
class pan {
public:
	bool operator()(string text) {
		if (text == "С��") {
			return true;
		}
		else {
			return false;
		}
	}
	//��Ԫν�ʣ��޸�����֮ǰ�ù�
	bool operator()(int val1,int val2) {
		return val1 > val2;
	}

};
void vectest() {
	vector<string>vec;
	vec.push_back("С��");
	vec.push_back("С��");
	vec.push_back("С��");
	vec.push_back("С��");
	vec.push_back("С��");

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