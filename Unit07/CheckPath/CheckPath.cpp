#include <iostream>
#include <filesystem>
#include <string>

int main() {
	namespace fs = std::filesystem;
	//����·����ʹ�����ַ�����ת���ַ�������б���ַ���
	fs::path p1{ "d:\\C++ ����������\\Example\\Example\\CheckPath\\Hello.txt" };
	fs::path p2{ R"(d:\C++ ����������\Example\Example\CheckPath)" };
	fs::path p3{ "D:/C++ ����������/Example/Example/CheckPath/Hllo.txt" };

	// ���Ĭ���ļ��ָ���
	std::cout << "file separater is: " << fs::path::preferred_separator << std::endl;

	// �ж��Ƿ��ǳ����ļ�������ǣ�����ļ���С
	if (fs::is_regular_file(p2)) {
		std::cout << p2 << "'s size is : " << fs::file_size(p2) << std::endl;
	}
	else if (fs::is_directory(p2)) {
		std::cout << p2 << " is a directory, includes: " << std::endl;
		for (auto& e : fs::directory_iterator(p2)) {
			std::cout << "  " << e.path() << std::endl;
		}
	}

	// �ж�·���Ƿ����
	else if (fs::exists(p2)) {
		std::cout << p2 << " is a special file\n";
	}
	else {
		std::cout << p2 << " does not exist" << std::endl;
	}
	std::cin.get();
	return 0;
}