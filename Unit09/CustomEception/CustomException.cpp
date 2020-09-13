#include <iostream>
#include "Vec3D.h"
using std::cout;
using std::endl;

// 任务4：在主函数中创建Vec3D对象并调用[]制造越界问题
// 捕获异常并输出异常中的信息

int main() {
	Vec3D v1{ 1.2, 3.2, 4.3 };
	try
	{
		cout << v1[4] << endl;
	}
	catch (std::exception& e)
	{
		cout << "Exception: " << e.what() << endl;

		// 引用类型若转型失败则抛出bad_cast类型异常
		if (typeid(e) == typeid(RangeException)) {
			auto r = dynamic_cast<RangeException&> (e);
			cout << "Vector dimension: " << r.getDimension() << endl;
			cout << "Index: " << r.getIndex() << endl;
		}
		// 指针类型若转型失败不会抛出异常且返回nullprt =>建议
		auto p = dynamic_cast<RangeException*> (&e);
		if (p != nullptr) {
			cout << p->what() << endl;
		}
		else
		{
			cout << e.what() << endl;
		} 
		// 以上可不进行动态类型转换，虚函数和动态联编基类指针e指向派生类，调用派生类what()函数
		cout << e.what() << endl;
	}
}