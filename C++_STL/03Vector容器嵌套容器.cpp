#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

void mysp(int v) {
	cout << v << endl;

}
void test2() {
	vector<int> v1;
	vector<int> v3;
	vector<vector<int>>v2;
	v1.push_back(1);
	v1.push_back(2);
	v3.push_back(3);
	v3.push_back(4);
	v3.push_back(5);
	v2.push_back(v1);
	v2.push_back(v3);

	//for_each(v2.begin(), v2.end(), mysp);
	for (vector<vector<int>>::iterator it = v2.begin(); it != v2.end(); it++) {
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << endl;
		
		}
	
	}

	
}

int main3(){
	test2();
	system("pause");
	return 0;

}