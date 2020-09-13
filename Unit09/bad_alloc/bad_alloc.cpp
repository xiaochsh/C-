#include <iostream>
using std::cout;
using std::endl;

int main() {
	try {
		for (int i = 0; i < 10000; i++) {
			auto* p{ new long long int[700000] };
			cout << i << " array" << endl;
		}
	}
	catch (std::bad_alloc& e) {
		cout << "Exception: " << e.what() << endl;
	}
}