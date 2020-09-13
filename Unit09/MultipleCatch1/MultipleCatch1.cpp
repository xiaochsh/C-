#include <iostream>
#include "Vec3D.h"
#include "RangeException.h"
#include "ZeroException.h"
using std::cout;
using std::endl;

// ����4�����������д���Vec3D���󲢵���[]����Խ������
// �����쳣������쳣�е���Ϣ

int main() {
	Vec3D v1{ 1.2, 3.2, 4.3 };
	try
	{
		// cout << v1[3] << endl;
		cout << (v1 / 0.0)[0] << endl;
	}
/*	catch (std::exception& e) 
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
	} */
	catch (RangeException& e) {
		cout << "Exception: " << e.what() << endl;
		cout << "Vector dimension is " << e.getDimension() << endl;
		cout << "You used index " << e.getIndex() << endl;
	}
	catch (ZeroException& e) {
		cout << "Exception: " << e.what() << endl;
	}
	return 0;
}