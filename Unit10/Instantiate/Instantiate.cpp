#include <iostream>
#include <string>
using namespace std::string_literals;

// ����ģ�嶨��
namespace myname {
	template <typename T>
	T max(T x, T y) {
		return (x > y ? x : y);
	}
	// ��ʾʵ����������
	template <int> int max(int, int);
}

int main() {
	// ������ʾʵ��������
	std::cout << "max(1, 2): " << myname::max(1, 2) << std::endl;

	// ������ʵ����
	std::cout << "max(2.9, 1.0): " << myname::max(2.9, 1.0) << std::endl;

	// �ַ�ʵ����
	std::cout << "max(A, D): " << myname::max('A', 'D') << std::endl;

	// �ַ���������ʵ����
	std::cout << R"(max("ABC", "ABD"))" << myname::max("ABC", "ABD") << std::endl;
	std::cout << R"(max("ABD", "ABC"))" << myname::max("ABD", "ABC") << std::endl;
	std::cout << R"(max("123", "124"))" << myname::max("123", "124") << std::endl;    // �Ƶ�����char *  �Ƚϵ�ַ�� ������ǰ�ĵ�ַ��

	// std::string����ʵ����
	std::cout << R"(max("ABC"s, "ABD"s))" << myname::max("ABC"s, "ABD"s) << std::endl;
	std::cout << R"(max("ABD"s, "ABC"s))" << myname::max("ABD"s, "ABC"s) << std::endl;

	return 0;
}
