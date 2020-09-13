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

// 将向量转化为字符串形式表示
std::string Vec2D::toString()
{
	// TODO: 在此处添加实现代码.
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

// 向量加向量
Vec2D Vec2D::add(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
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

// 向量加数值
Vec2D Vec2D::add(double numeral)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

Vec2D Vec2D::operator+(const double numeral)
{
	return this->add(numeral);
}

// 向量相减
Vec2D Vec2D::substract(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
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

// 向量减数值
Vec2D Vec2D::substract(double numeral)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_ - numeral, y_ - numeral);
}

Vec2D Vec2D::operator-(double numeral)
{
	return this->substract(numeral);
}

// 读取或修改向量元素
double& Vec2D::at(const int index)
{
	// TODO: 在此处添加实现代码.
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

// 两个向量比较
int Vec2D::compareTo(Vec2D secondVec2D)
{
	// TODO: 在此处添加实现代码.
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10)
		return 0;
	else
		return (m1 > m2 ? 1 : -1);
}

// 向量自减1
Vec2D& Vec2D::decrease()
{
	// TODO: 在此处添加实现代码.
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

// 向量自增1
Vec2D& Vec2D::increase()
{
	// TODO: 在此处添加实现代码.
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

// 向量与x轴夹角
double Vec2D::direction()
{
	// TODO: 在此处添加实现代码.
	return atan(y_ / x_);
}

// 求向量的模
double Vec2D::magnitude()
{
	// TODO: 在此处添加实现代码.
	return sqrt(x_ * x_ + y_ * y_);
}

Vec2D::operator double()
{
	return magnitude();
}

// 向量数乘
Vec2D Vec2D::multiply(double multiplier)
{
	// TODO: 在此处添加实现代码.
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

// 向量点积
double Vec2D::dot(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return (x_ * secondVec2D.x_ + y_ * secondVec2D.y_);
}

double Vec2D::operator*(const Vec2D& secondVec2D)
{
	return this->dot(secondVec2D);
}

// 求向量负值
Vec2D Vec2D::negative()
{
	// TODO: 在此处添加实现代码.
	return Vec2D(-x_, -y_);
}

Vec2D Vec2D::operator-()
{
	return Vec2D(-this->x_, -this->y_);
}