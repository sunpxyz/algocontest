// Chapter 04. Divide Conquer
// QuickSort.cpp
// 2017.10.22

/*
#include <iostream>
#include <vector>
#include <algorithm>


void QuickSort(std::vector<int> &iv, std::size_t l, std::size_t r);
std::size_t Partition(std::vector<int> &iv, std::size_t l, std::size_t r);


int main() {
	std::vector<int> ivt = { 9, 6, 2, 3, 5, 4, 7, 8};
	std::cout << "before sorting..." << std::endl;
	for (std::size_t i = 0; i < ivt.size(); ++i) {
		std::cout << ivt[i] << " ";
	}
	std::cout << std::endl;

	QuickSort(ivt, 0, ivt.size() - 1);

	std::cout << "\nafter sorting..." << std::endl;
	for (std::size_t i = 0; i < ivt.size(); ++i) {
		std::cout << ivt[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}


void QuickSort(std::vector<int> &iv, std::size_t lb, std::size_t rb) {
	std::size_t s;
	if (lb < rb) {
		s = Partition(iv, lb, rb);

		QuickSort(iv, lb, s - 1);
		QuickSort(iv, s + 1, rb);
	}
}


std::size_t Partition(std::vector<int> &iv, std::size_t lb, std::size_t rb) {
	int pivot = iv[lb];
	std::size_t i = lb, j = rb;
	
	while (i < j) {
		while (j > i && iv[j] >= pivot) {
			--j;	
		}

		if (i < j) {
			iv[i++] = iv[j];
		}

		while (i < j && iv[i] < pivot) {
			++i;
		}

		if (i < j) {
			iv[j--] = iv[i];
		}

		iv[i] = pivot;
	}

	return i;
}
*/
