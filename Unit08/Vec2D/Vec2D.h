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
	// ������ת��Ϊ�ַ�����ʽ��ʾ
	std::string toString();
	friend std::ostream& operator<<(std::ostream& os, const Vec2D& v);
	friend std::istream& operator>>(std::istream& is, Vec2D& v);
	// ����������
	Vec2D add(const Vec2D& secondVec2D);
	Vec2D operator+(const Vec2D& secondVec2D);
	Vec2D& operator+=(const Vec2D& secondVec2D);
	// ��������ֵ
	Vec2D add(double numeral);
	Vec2D operator+(const double numeral);
	// �������
	Vec2D substract(const Vec2D& secondVec2D);
	Vec2D operator-(const Vec2D& secondVec2D);
	Vec2D& operator-=(const Vec2D& secondVec2D);
	// ��������ֵ
	Vec2D substract(double numeral);
	Vec2D operator-(double numeral);
	// ��ȡ���޸�����Ԫ��
	double& at(const int index);
	double& operator[](const int index);
	// ���������Ƚ�
	int compareTo(Vec2D secondVec2D);
	// �����Լ�1
	Vec2D& decrease();
	Vec2D& operator--();
	Vec2D operator--(int dummy);
	// ��������1
	Vec2D& increase();
	Vec2D& operator++();
	Vec2D operator++(int dummy);
	// ������x��н�
	double direction();
	// ��������ģ
	double magnitude();
	operator double();
	// ��������
	Vec2D multiply(double multiplier);
	Vec2D operator*(double multiplier);
	friend Vec2D operator*(double multiplier, Vec2D secondVec2D);
	// �������
	double dot(const Vec2D& secondVec2D);
	double operator*(const Vec2D& secondVec2D);
	// ��������ֵ
	Vec2D negative();
	Vec2D operator-();
};
