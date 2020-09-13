#pragma once
template <typename T = char, int N = 100>
class Stack {
private:
	T elements[N];
	int size{ 0 };
public:
	bool empty();
	T peek();
	T push(int value);
	T pop();
	int getSize();
	Stack();
};

template <typename T, int N>
Stack<T, N>::Stack() {
	size = 0;
	for (auto& i : elements) {
		i = 0;
	}
}

template <typename T, int N>
bool Stack<T, N>::empty() {
	return (size == 0 ? true : false);
}

template <typename T, int N>
int Stack<T, N>::getSize() {
	return size;
}

template <typename T, int N>
T Stack<T, N>::peek() {
	return elements[size - 1];
}

template <typename T, int N>
T Stack<T, N>::pop() {
	int temp = elements[size - 1];
	elements[size - 1] = 0;
	size--;
	return temp;
}

template <typename T, int N>
T Stack<T, N>::push(int value) {
	elements[size] = value;
	size++;
	return value;
}