#include <iostream>
#include <filesystem>

double Byte2Gb(const uintmax_t);

int main() {
	using std::cout;
	using std::endl;
	namespace fs = std::filesystem;

	// ����·������
	fs::path p{ "C:\\" };
	// չʾ����·���÷��ܴ�С��ʣ��ռ�
	cout << "C: total space: " << Byte2Gb(fs::space(p).capacity) << "GB.\n";
	cout << "C: free space: " << Byte2Gb(fs::space(p).free) << "GB.\n";

	return 0;
}

double Byte2Gb(const uintmax_t num) {
	return num / 1024.0 / 1024.0 / 1024.0;
}