// Chapter 03. Brute Force
// SelectionSort.cpp
// 2017.09.30

/*
#include <iostream>
#include <algorithm>


template<typename T>
void SelectionSort(T t[], std::size_t n);


int main() {
	int test[] = { 1, 5, 7, 9, 2, 5, 3, 4, 8 };
	int len = sizeof(test) / sizeof(test[0]);

	std::cout << "before sorting:" << std::endl;
	for (int i = 0; i < len; ++i) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;

	SelectionSort<int>(test, len);

	std::cout << "\nafter sorting:" << std::endl;
	for (int i = 0; i < len; ++i) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}


template<typename T>
void SelectionSort(T t[], std::size_t n) {
	std::size_t minIndex;
	for (std::size_t i = 0; i < n - 1; ++i) {
		minIndex = i;

		for (std::size_t j = i + 1; j < n; j++) {
			if (t[j] < t[minIndex]) {
				std::swap(t[j], t[minIndex]);
			}
		}
	}
}
*/
