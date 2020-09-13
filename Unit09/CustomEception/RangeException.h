#pragma once
// 任务2：创建RangfeException类
// 定义构造函数 RangeException(std::size_t dimention, const int index)

#include <iostream>
#include <exception>

class RangeException : public std::exception{
private:
	std::size_t dimensioin{ 3 };
	int index{ 0 };
public:
	RangeException(std::size_t dimension, const int index) {
		this->dimensioin = dimensioin;
		this->index = index;
	}
	std::size_t getDimension() {
		return dimensioin;
	}
	int getIndex() {
		return index;
	}
	const char* what() const throw ()
	{
		return "Index out of range";
	} 
};