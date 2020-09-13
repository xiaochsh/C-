#include <iostream>
template <typename T, typename S>
auto add(T x, S y) {
	return x + y;
}

void main() {
	std::cout << add(3.1, 2) << std::endl;
}