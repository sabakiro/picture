//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//#define MAX 4
//
//template<typename T>
//struct Stack {
//private:
//	int _size;
//	T* _stack;
//public:
//	Stack() {
//		this->_size = 0;
//		this->_stack = new T[MAX];
//	}
//	void push(T data) {
//		if (this->_size == MAX) {
//			return;
//		}
//		this->_stack[this->_size] = data;
//		this->_size++;
//	}
//	void pop() {
//		if (this->_size == 0) {
//			return;
//		}
//		this->_size--;
//	}
//	T top() {
//		return this->_stack[this->_size-1];
//	}
//	int isEmpty() {
//		if (this->_size == 0) {
//			return 1;
//		}
//		return 0;
//	}
//};
//struct Person {
//	int age;
//public:
//
//};
//ostream& operator<<(ostream& os, Person p) {
//	os << p.age << endl;
//	return os;
//}
//int main() {
//	Person p1 = { 10 };
//	Person p2 = { 20 };
//	Person p3 = { 30 };
//	Person p4 = { 40 };
//	Stack<Person> stack;
//	stack.push(p1);
//	stack.push(p2);
//	stack.push(p3);
//	stack.push(p4);
//	while (!stack.isEmpty())
//	{
//		cout << stack.top() << endl;
//		stack.pop();
//	}
//
//
//	system("pause");
//	return 0;
//}