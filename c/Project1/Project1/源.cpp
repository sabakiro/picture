#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#define MAX 5
template<typename T>
struct Array {
	Array() {
		this->_size = 0;
		this->_capacity = MAX;
		this->_array = new T[this->_capacity];
	}
	Array(int capacity) {
		this->_size = 0;
		this->_capacity = capacity;
		this->_array = new T[this->capacity];
	}
	int push(T data,int pos) {
		if (this->_capacity == this->_size) {
			int new_space = this->_capacity * 2;
			T* newArr = new T[new_space];
			delete[] this->_array;
			this->_array = newArr;
		}
		if (pos<0 || pos>this->_size) {
			pos = this->_size;
		}
		for (int i = this->_size-1; i >= pos; i--) {
			this->_array[i+1] = this->_array[i];
		}
		this->_array[pos] = data;
		this->_size++;
		return 1;
	}
	int push(T data) {
		if (this->_capacity == this->_size) {
			int new_space = this->_capacity * 2;
			T* newArr = new T[new_space];
			delete[] this->_array;
			this->_array = newArr;
		}
		this->_array[this->_size] = data;
		this->_size++;
		return 1;
	}
	int pop(int pos=0) {
		if (this->_size == 0) {
			return 0;
		}
		if (pos<0 || pos>this->_size) {
			return -1;
		}
		for (int i = pos; i <this->_size-1; i++) {
			this->_array[i] = this->_array[i+1];
		}
		this->_size--;
		return 1;
	}
	T* begin() {
		this->_begin = this->_array;
		return this->_begin;
	}
	T* end() {
		this->_end = &this->_array[this->_size];
		return this->_end;
	}
	int size() {
		return this->_size;
	}
	typedef T* iteror;
private:
	int _size;
	int _capacity;
	T* _array;
	T* _begin;
	T* _end;
};
template<typename T>
void foreach(T*beg,T*end) {
	while (beg!=end)
	{
		cout << "num:" << *(beg++) << endl;
	}
}

int main() {
	Array<int> arr;
	arr.push(10);
	arr.push(20);
	arr.push(30);
	arr.push(40);
	cout << "size"<<arr.size() << endl;
	//arr.pop();
	Array<int>::iteror beg = arr.begin();
	Array<int>::iteror end = arr.end();
	foreach(beg, end);
	cout << "size" << arr.size() << endl;
	system("pause");
	return 0;
}