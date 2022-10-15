#include "merge_sort.h"

void merge_sort(int32_t* begin, int32_t* end) {
	size_t size = end - begin;
	if (size == 1) {
		return;
	}

	size_t mid = size / 2;

	merge_sort(begin, begin + mid);
	merge_sort(begin + mid, end);

	int32_t* arr = new int32_t[size];
	int32_t* i = begin;
	int32_t* j = begin + mid;

	for (size_t k = 0; k < size; k++) {
		if (j == end) {
			arr[k] = *i;
			++i;
		} else if (i == begin + mid) {
			arr[k] = *j;
			++j;
		} else if (*i < *j) {
			arr[k] = *i;
			++i;
		} else if (*i >= *j) {
			arr[k] = *j;
			++j;
		}
	}

	for (size_t k = 0; k < size; k++) {
		*(begin + k) = arr[k];
	}
	
	delete[] arr;
}