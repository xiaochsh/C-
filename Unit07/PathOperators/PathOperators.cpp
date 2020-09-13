#include <iostream>
#include <filesystem>
#include <string>
using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main() {
	// ����·������
	fs::path p1{ R"(C:\temp)" };
	fs::path p2{ R"(C:\temp)" };
	fs::path p3{ "" };
	// append��/=
	p1.append(R"(users)");
	p1 /= R"(xiaochsh)";

	cout << p1 << endl;

	// concat��+=
	p2.concat(R"(users)");
	p2 += R"(xiaochsh)";

	cout << p2 << endl;
	// ������� / ƴ��һ����·��
	p3 = p3 / R"(C:\temp)" / R"(users)" / R"(xiaochsh)";

	cout << p3 << endl;

	return 0;
}