#include <iostream>
#include <filesystem>

double Byte2Gb(const uintmax_t);

int main() {
	using std::cout;
	using std::endl;
	namespace fs = std::filesystem;

	// 定义路径对象
	fs::path p{ "C:\\" };
	// 展示磁盘路径得分总大小和剩余空间
	cout << "C: total space: " << Byte2Gb(fs::space(p).capacity) << "GB.\n";
	cout << "C: free space: " << Byte2Gb(fs::space(p).free) << "GB.\n";

	return 0;
}

double Byte2Gb(const uintmax_t num) {
	return num / 1024.0 / 1024.0 / 1024.0;
}