#include "Vec2D.h"

Vec2D::Vec2D() {
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
	x_ = x;
	y_ = y;
}

Vec2D::~Vec2D() {
}

// ������ת��Ϊ�ַ�����ʽ��ʾ
std::string Vec2D::toString()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return std::string("(" + std::to_string(x_) + ","
		+ std::to_string(y_) + ")");
}

std::ostream& operator<<(std::ostream& os, const Vec2D& v) //  cout << v1;
{
	os << "(" << v.x_ << ", " << v.y_ << ")";
	return os;
}
std::istream& operator>>(std::istream& is, Vec2D& v)
{
	is >> v.x_ >> v.y_;
	return is;
}

// ����������
Vec2D Vec2D::add(const Vec2D& secondVec2D)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D(x_ + secondVec2D.x_, y_ + secondVec2D.y_);
}

Vec2D Vec2D::operator+(const Vec2D& secondVec2D)
{
	return this->add(secondVec2D);
}

Vec2D& Vec2D::operator+=(const Vec2D& secondVec2D)
{
	x_ += secondVec2D.x_;
	y_ += secondVec2D.y_;
	return *this;
}

// ��������ֵ
Vec2D Vec2D::add(double numeral)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

Vec2D Vec2D::operator+(const double numeral)
{
	return this->add(numeral);
}

// �������
Vec2D Vec2D::substract(const Vec2D& secondVec2D)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D(x_ - secondVec2D.x_, y_ - secondVec2D.y_);
}

Vec2D Vec2D::operator-(const Vec2D& secondVec2D)
{
	return this->substract(secondVec2D);
}

Vec2D& Vec2D::operator-=(const Vec2D& secondVec2D)
{
	x_ -= secondVec2D.x_;
	y_ -= secondVec2D.y_;
	return *this;
}

// ��������ֵ
Vec2D Vec2D::substract(double numeral)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D(x_ - numeral, y_ - numeral);
}

Vec2D Vec2D::operator-(double numeral)
{
	return this->substract(numeral);
}

// ��ȡ���޸�����Ԫ��
double& Vec2D::at(const int index)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	if (0 == index)
		return x_;
	else if (1 == index)
		return y_;
	else
		throw std::out_of_range("at() only 0 or 1 as parameter");
}

double& Vec2D::operator[](const int index)
{
	return at(index);
}

// ���������Ƚ�
int Vec2D::compareTo(Vec2D secondVec2D)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10)
		return 0;
	else
		return (m1 > m2 ? 1 : -1);
}

// �����Լ�1
Vec2D& Vec2D::decrease()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	--x_; --y_;
	return *this;
}

Vec2D& Vec2D::operator--()
{
	return decrease();
}
Vec2D Vec2D::operator--(int dummy)
{
	Vec2D temp{ x_, y_ };  // temp{ *this };
	--x_; --y_;
	return temp;
}

// ��������1
Vec2D& Vec2D::increase()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	++x_; ++y_;
	return *this;
}

Vec2D& Vec2D::operator++()
{
	return increase();
}
Vec2D Vec2D::operator++(int dummy)
{
	Vec2D temp{ x_, y_ };  // temp{ *this };
	++x_; ++y_;
	return temp;
}

// ������x��н�
double Vec2D::direction()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return atan(y_ / x_);
}

// ��������ģ
double Vec2D::magnitude()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return sqrt(x_ * x_ + y_ * y_);
}

Vec2D::operator double()
{
	return magnitude();
}

// ��������
Vec2D Vec2D::multiply(double multiplier)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D(x_ * multiplier, y_ * multiplier);
}

Vec2D Vec2D::operator*(double multiplier)
{
	return this->multiply(multiplier);
}

Vec2D operator*(double multiplier, Vec2D secondVec2D)
{
	return secondVec2D.multiply(multiplier);
}

// �������
double Vec2D::dot(const Vec2D& secondVec2D)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return (x_ * secondVec2D.x_ + y_ * secondVec2D.y_);
}

double Vec2D::operator*(const Vec2D& secondVec2D)
{
	return this->dot(secondVec2D);
}

// ��������ֵ
Vec2D Vec2D::negative()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D(-x_, -y_);
}

Vec2D Vec2D::operator-()
{
	return Vec2D(-this->x_, -this->y_);
}