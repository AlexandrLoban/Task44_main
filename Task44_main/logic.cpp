#include "logic.h"


int amount_of_even(int arr[SIZE]) {
	int count = 0;

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}