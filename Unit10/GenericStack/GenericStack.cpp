#include "Stack.h"
#include <iostream>
#include <string>

// 2.����һ���ַ�ջ����һ���ַ��������ݷ�ת���

int main() {
	Stack<> c;
	std::string s{ "Hello, World!" };
	for (auto i : s) {
		c.push(i);
	}

	for (; c.empty() != true; ) {
		std::cout << c.pop();
	}
}