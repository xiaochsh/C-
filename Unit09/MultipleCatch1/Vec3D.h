#pragma once
#include <array>
#include <cmath>
#include <limits>
#include "RangeException.h"
#include "ZeroException.h"
// ����1������Vec3D�࣬��array����������Ա

// ����3��ʵ��Vec3D::operator[](const int index)
// ��indexԽ��ʱ���׳�RangeException�Ķ���

class Vec3D {
public:
	constexpr static std::size_t DIMENSION{ 3 };
private:
	std::array <double, DIMENSION> v{ 1.0, 1.0, 1.0 };
	bool isSame(double a, double b) {
		return std::fabs(a - b) < std::numeric_limits<double>::epsilon();
	}
public:
	Vec3D() = default;
	Vec3D(double x, double y, double z) {
		v[0] = x;
		v[1] = y;
		v[2] = z;
	}
	double operator [] (const int index) {
		if (index >= 0 && index < DIMENSION) {
			return v[index];
		}
		else
		{
			throw RangeException(DIMENSION, index);
		}
	}
	Vec3D operator / (const double divisor) {
		Vec3D t(*this);
		if (isSame(divisor, 0.0)) {
			throw ZeroException();
		}
		for (auto& i : t.v) {
			i /= divisor;
		}
		return t;
	}
};