#include "insertion_sort.h"


void insertion_sort(int32_t* begin, int32_t* end) {
	
	size_t size = end - begin;
	size_t i = 1;

	for (size_t j = 1; j < size; j++){
		int32_t value = *(begin + j);
		size_t temp = i;

		bool diff = false;

		while (temp >= 0) {
			if (value >= *(begin + temp - 1) || temp == 0) {
				*(begin + temp) = value;
				break;
			}
			else {
				*(begin + temp) = *(begin + temp - 1);
				--temp;
				diff = true;
			}		
		}
		++i;
	}
}