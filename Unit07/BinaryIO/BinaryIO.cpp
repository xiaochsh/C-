#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>

int main() {
	namespace fs = std::filesystem;
	using io = std::ios;

	fs::path p{ "array.dat" };
	// 创建二进制输出流
	std::fstream out{ p, io::out | io::app };

	// 判断流是否成功打开
	if (out.fail()) {
		std::cout << "Can't open file " << p << std::endl;
		std::abort();
	}

	// 将一个整数型数组的内容输出到二进制文件中
	std::array a{ 21L, 42L, 63L };
	std::streamsize size = a.size() * sizeof(a[0]);
	out.write(reinterpret_cast<char*>(&a[0]), size);

	// 以读模式重新打开二进制文件，或者将文件光标定位到文件开头 fstream::seekg()
	out.close();
	out.open(p, io::in);
	if (out.fail()) {
		std::cout << "Can't open file " << p << std::endl;
		std::abort();
	}

	// 从二进制流中读入与一个整数并显示到屏幕上
	auto x{ 0L };
	out.read(reinterpret_cast<char*>(&x), sizeof(x));
	std::cout << x << std::endl;

	return 0;
}