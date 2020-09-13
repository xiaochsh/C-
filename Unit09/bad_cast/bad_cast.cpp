#include <iostream>
#include <exception>
#include <stdexcept>
using std::cout;
using std::endl;
class Student {
public:
	Student() = default;
};
class Undergraduate : public Student {};
class Graduate : public Student {};

int main() {
	Undergraduate u;
	Graduate g;
	Student* s1 = &u;
	Student* s2 = &g;
}