#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <filesystem>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main() {
	// 打开文件
	std::filesystem::path p{ "greatwall.txt" };
	ifstream in{ p };
	if (!in) { // !in.fial();
		cout << "Can't open file " << p << endl;
		std::abort();
	}
	// 任务1：istream::getline函数
	constexpr int SIZE{ 40 };
	std::array<char, SIZE> buf;
	while (!in.eof())
	{
		in.getline(&buf[0], SIZE, '#');
		cout << &buf[0] << endl;
	}
	// 任务2：std::getline函数
	in.close();
	in.open(p);
	std::string name1{ "" };
	while (!in.eof())
	{
		std::getline(in, name1, '#');
		cout << name1 << endl;
	}

	std::cin.get();
	return 0;
}