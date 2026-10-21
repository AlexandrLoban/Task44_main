#include "logic.h"

int main() {
	int array[SIZE];

	cout << "Input your elements in array: ";

	for (int i = 0; i < SIZE; i++) {
		cin >> array[i];

	}

	string result;

	switch (array_the_same(array)) {
	case false: result = "false"; break;
	default: result = "true"; break;
	}

	cout << "Data in your array is the same: " << result << "\n";

	return 0;
}