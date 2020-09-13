#include "StackOfIntegers.h"

StackOfIntergers::StackOfIntergers() {
	size = 0;
	for (int& i : elements) {
		i = 0;
	}
}

bool StackOfIntergers::empty() {
	return (size == 0 ? true : false);
}

int StackOfIntergers::getSize() {
	return size;
}

int StackOfIntergers::peek() {
	return elements[size - 1];
}

int StackOfIntergers::pop() {
	int temp = elements[size - 1];
	elements[size - 1] = 0;
	size--;
	return temp;
}

int StackOfIntergers::push(int value) {
	elements[size] = value;
	size++;
	return value;
}