#include <iostream>
using namespace std;
/*
	Queue ���У��Ƚ��ȳ���
	��β��ӣ���ͷ����
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
	Person p1("С��");
	Person p2("С��");
	Person p3("С��");
	Person p4("С��");

	s.push(p1);
	s.push(p2);
	s.push(p3);
	s.push(p4);

	while (!s.empty()) {
		cout << "������" << s.front().m_name << endl;
		cout << "������" << s.back().m_name << endl;
		
		s.pop();
	}
	cout << "��С" << s.size() << endl;

}
int main9() {

	qtest1();
	return 0;
}