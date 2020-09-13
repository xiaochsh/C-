#pragma once
#include <iostream>
#include <array>

template <typename T>
void selectionSort(T list[], const std::size_t size) {
	// for ѭ����ÿ�δ�list[i]~list[size-1]���ҳ�һ����С���飬��list[i]����
	for (int i = 0; i < size - 1; i++) {
		// ��ʼ������list[i]��Ϊ��Сֵ����i��Ϊ��Сֵ������
		T min = list[i];
		int index = i;
		// ��ѭ�����ҳ�list[i+1]~list[size-1]�е���Сֵ����������
		for (int j = i + 1; j < size; j++) {
			if (min > list[j]) {
				min = list[j];
				index = j;
			}
		}
		// ��list[i]������Сֵ���򽻻�list[i]��list[index]
		if (index != i) {
			list[index] = list[i];
			list[i] = min;
		}
	}
}

template <typename T, int N>
void selectionSort(std::array<T, N>& list) {
	constexpr int size{ N };
	// for ѭ����ÿ�δ�list[i]~list[size-1]���ҳ�һ����С���飬��list[i]����
	for (int i = 0; i < size - 1; i++) {
		// ��ʼ������list[i]��Ϊ��Сֵ����i��Ϊ��Сֵ������
		T min = list[i];
		int index = i;
		// ��ѭ�����ҳ�list[i+1]~list[size-1]�е���Сֵ����������
		for (int j = i + 1; j < size; j++) {
			if (min > list[j]) {
				min = list[j];
				index = j;
			}
		}
		// ��list[i]������Сֵ���򽻻�list[i]��list[index]
		if (index != i) {
			list[index] = list[i];
			list[i] = min;
		}
	}
}