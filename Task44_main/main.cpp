#include "logic.h"

int main() {
	int array[SIZE] = {};

	cout << "Input your elements in array: ";

	for (int i = 0; i < SIZE; i++) {
		cin >> array[i];

	}
	int amount_odd_numbers = SIZE - amount_of_even(array);

	cout << "amount of even numbers in array: " << amount_of_even(array) << "\n";
	cout << "amount of odd numbers in array: " << amount_odd_numbers << "\n";

	return 0;
}