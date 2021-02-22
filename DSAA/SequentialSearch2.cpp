// Chapter 03. Brute Force
// SequentialSearch2.cpp
// 2017.10.08

/*
#include <iostream>

const int N = 8;

template<typename T> 
int SequentialSearch2(T t[], int size, T key);


int main() {
	int test[N] = {1, 5, 6, 9, 0, 2, 3};
	int key = 6;
	
	for (int i = 0; i < N - 1; ++i) {
		std::cout << test[i] << " ";
	}
	std::cout << "\n" << key << "\n" << std::endl;

	std::cout << SequentialSearch2<int>(test, N, key) << std::endl;

	return 0;
}


template<typename T> 
int SequentialSearch2(T t[], int size, T key) {
	t[size - 1] = key;
	
	int i = 0;
	while (t[i] != key) {
		i++;
	}

	if (i != size - 1) {
		return i;
	} else {
		return -1;
	}
}
*/
