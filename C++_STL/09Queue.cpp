#include <iostream>
using namespace std;
/*
	Queue 队列，先进先出形
	队尾入队，队头出队
*/
#include <queue>
#include <string>
class Person {
public:
	string m_name;
	Person(string name) {
		this->m_name = name;
	}

};
void qtest1() {
	queue<Person> s;
	Person p1("小黑");
	Person p2("小红");
	Person p3("小绿");
	Person p4("小白");

	s.push(p1);
	s.push(p2);
	s.push(p3);
	s.push(p4);

	while (!s.empty()) {
		cout << "名字是" << s.front().m_name << endl;
		cout << "名字是" << s.back().m_name << endl;
		
		s.pop();
	}
	cout << "大小" << s.size() << endl;

}
int main9() {

	qtest1();
	return 0;
}