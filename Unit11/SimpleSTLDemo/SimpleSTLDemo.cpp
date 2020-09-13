#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int main() {
	vector<int> vector1, vector2;
	list<int> list1, list2;
	deque<int> deque1, deque2;
	set<int> set1, set2;
	stack<int> stack1, stack2;
	queue<int> queue1, queue2;

	cout << "Vector: " << endl;
	vector1.push_back(1);
	vector1.push_back(2);
	vector2.push_back(30);
	cout << "size of vector1: " << vector1.size() << endl;
	cout << "size of vector2: " << vector2.size() << endl;
	cout << "maximum size of vector1: " << vector1.max_size() << endl;
	cout << "maximum size of vector2: " << vector2.max_size() << endl;
	vector1.swap(vector2);
	cout << "size of vector1: " << vector1.size() << endl;
	cout << "size of vector2: " << vector2.size() << endl;
	cout << "vector1 < vector2 ? " << boolalpha << (vector1 < vector2) << endl; // 比较首元素

	cout << endl;

	cout << "List: " << endl;
	list1.push_back(1);
	list1.push_back(2);
	list2.push_back(30);
	cout << "size of list1: " << list1.size() << endl;
	cout << "size of list2: " << list2.size() << endl;
	cout << "maximum size of list1: " << list1.max_size() << endl;
	cout << "maximum size of list2: " << list2.max_size() << endl;
	list1.swap(list2);
	cout << "size of list1: " << list1.size() << endl;
	cout << "size of list2: " << list2.size() << endl;
	cout << "list1 < list2 ? " << boolalpha << (list1 < list2) << endl; // 比较首元素

	cout << endl;

	cout << "Deque: " << endl;
	deque1.push_back(1);
	deque1.push_back(2);
	deque2.push_back(30);
	cout << "size of deque1: " << deque1.size() << endl;
	cout << "size of deque2: " << deque2.size() << endl;
	cout << "maximum size of deque1: " << deque1.max_size() << endl;
	cout << "maximum size of deque2: " << deque2.max_size() << endl;
	deque1.swap(deque2);
	cout << "size of list1: " << deque1.size() << endl;
	cout << "size of list2: " << deque2.size() << endl;
	cout << "deque1 < deque2 ? " << boolalpha << (deque1 < deque2) << endl; // 比较首元素

}