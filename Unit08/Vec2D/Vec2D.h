#pragma once
#include <string>
#include <stdexcept>
#include <cmath>
#include <iostream>
class Vec2D
{
private:
	double x_;
	double y_;
public:
	Vec2D();
	Vec2D(double x, double y);
	~Vec2D();
	// 将向量转化为字符串形式表示
	std::string toString();
	friend std::ostream& operator<<(std::ostream& os, const Vec2D& v);
	friend std::istream& operator>>(std::istream& is, Vec2D& v);
	// 向量加向量
	Vec2D add(const Vec2D& secondVec2D);
	Vec2D operator+(const Vec2D& secondVec2D);
	Vec2D& operator+=(const Vec2D& secondVec2D);
	// 向量加数值
	Vec2D add(double numeral);
	Vec2D operator+(const double numeral);
	// 向量相减
	Vec2D substract(const Vec2D& secondVec2D);
	Vec2D operator-(const Vec2D& secondVec2D);
	Vec2D& operator-=(const Vec2D& secondVec2D);
	// 向量减数值
	Vec2D substract(double numeral);
	Vec2D operator-(double numeral);
	// 读取或修改向量元素
	double& at(const int index);
	double& operator[](const int index);
	// 两个向量比较
	int compareTo(Vec2D secondVec2D);
	// 向量自减1
	Vec2D& decrease();
	Vec2D& operator--();
	Vec2D operator--(int dummy);
	// 向量自增1
	Vec2D& increase();
	Vec2D& operator++();
	Vec2D operator++(int dummy);
	// 向量与x轴夹角
	double direction();
	// 求向量的模
	double magnitude();
	operator double();
	// 向量数乘
	Vec2D multiply(double multiplier);
	Vec2D operator*(double multiplier);
	friend Vec2D operator*(double multiplier, Vec2D secondVec2D);
	// 向量点积
	double dot(const Vec2D& secondVec2D);
	double operator*(const Vec2D& secondVec2D);
	// 求向量负值
	Vec2D negative();
	Vec2D operator-();
};
