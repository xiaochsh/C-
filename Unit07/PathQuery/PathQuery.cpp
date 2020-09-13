#include <iostream>
#include <filesystem>

using std::cout;
using std::endl;

int main() {
	namespace fs = std::filesystem;
	// ����·��p
	fs::path p{ R"(D:\C++ ����������\Example\PathQuery\PathQuery.cpp)" };
	// �Ƿ���ڣ���������·�������·����
	if (p.empty()) {
		cout << "Path " << p << "is empty." << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path " << p << " does not exist." << endl;
		std::exit(0);
	}
	cout << "root_name(): " << p.root_name() << endl
		<< "root_path(): " << p.root_path() << endl
		<< "relative_path(): " << p.relative_path() << endl;
	// ��·�����ļ������ļ������ɣ���չ��
	cout << "parent_path(): " << p.parent_path() << endl
		<< "filename(): " << p.filename() << endl
		<< "stem(): " << p.stem() << endl
		<< "extension(): " << p.extension() << endl;

	return 0;
}