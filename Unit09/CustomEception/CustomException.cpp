#include <iostream>
#include "Vec3D.h"
using std::cout;
using std::endl;

// ����4�����������д���Vec3D���󲢵���[]����Խ������
// �����쳣������쳣�е���Ϣ

int main() {
	Vec3D v1{ 1.2, 3.2, 4.3 };
	try
	{
		cout << v1[4] << endl;
	}
	catch (std::exception& e)
	{
		cout << "Exception: " << e.what() << endl;

		// ����������ת��ʧ�����׳�bad_cast�����쳣
		if (typeid(e) == typeid(RangeException)) {
			auto r = dynamic_cast<RangeException&> (e);
			cout << "Vector dimension: " << r.getDimension() << endl;
			cout << "Index: " << r.getIndex() << endl;
		}
		// ָ��������ת��ʧ�ܲ����׳��쳣�ҷ���nullprt =>����
		auto p = dynamic_cast<RangeException*> (&e);
		if (p != nullptr) {
			cout << p->what() << endl;
		}
		else
		{
			cout << e.what() << endl;
		} 
		// ���Ͽɲ����ж�̬����ת�����麯���Ͷ�̬�������ָ��eָ�������࣬����������what()����
		cout << e.what() << endl;
	}
}