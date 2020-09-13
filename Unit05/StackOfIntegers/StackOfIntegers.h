#pragma once
// »ŒŒÒ1£∫±‡–¥StackOfIntergers¿‡
/*
-element: int [100]
-size: int
+StackofIntegers()
+empty(): bool
+peek(): int
+push(value: int): int
+pop(): int
+getSize(): int
*/

class StackOfIntergers {
private:
	int elements[100];
	int size{ 0 };
public:
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
	StackOfIntergers();
};