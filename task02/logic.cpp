#include "logic.h"

bool array_the_same(int arr[SIZE]) {

	for (int i = SIZE - 1; arr[i] > 0; i--) {
		if (arr[0] != arr[i]) {
			return false;
		}

	}

	return true;
}