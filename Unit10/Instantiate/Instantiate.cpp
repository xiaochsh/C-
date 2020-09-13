#include <iostream>
#include <string>
using namespace std::string_literals;

// 函数模板定义
namespace myname {
	template <typename T>
	T max(T x, T y) {
		return (x > y ? x : y);
	}
	// 显示实例化：整数
	template <int> int max(int, int);
}

int main() {
	// 调用显示实例化函数
	std::cout << "max(1, 2): " << myname::max(1, 2) << std::endl;

	// 浮点数实例化
	std::cout << "max(2.9, 1.0): " << myname::max(2.9, 1.0) << std::endl;

	// 字符实例化
	std::cout << "max(A, D): " << myname::max('A', 'D') << std::endl;

	// 字符串字面量实例化
	std::cout << R"(max("ABC", "ABD"))" << myname::max("ABC", "ABD") << std::endl;
	std::cout << R"(max("ABD", "ABC"))" << myname::max("ABD", "ABC") << std::endl;
	std::cout << R"(max("123", "124"))" << myname::max("123", "124") << std::endl;    // 推导类型char *  比较地址， 参数在前的地址大

	// std::string类型实例化
	std::cout << R"(max("ABC"s, "ABD"s))" << myname::max("ABC"s, "ABD"s) << std::endl;
	std::cout << R"(max("ABD"s, "ABC"s))" << myname::max("ABD"s, "ABC"s) << std::endl;

	return 0;
}
