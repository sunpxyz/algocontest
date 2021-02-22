// pat_b_1023.cpp
// 2017.02.20

/*
#include <iostream>
#include <algorithm>
#include <vector>


bool cmp(int i, int j) { return i < j; }


int main() {
	std::vector<int> vecInt;

	int n;
	for (int i = 0; i < 10; i++) {
		std::cin >> n;
		for (int j = 0; j < n; ++j) {
			vecInt.push_back(i);
		}
	}

	std::sort(vecInt.begin(), vecInt.end(), cmp);

	int exchange;
	if (vecInt[0] == 0) {
		for (std::vector<int>::iterator itVecInt = vecInt.begin();
			itVecInt != vecInt.end(); ++itVecInt) {
			if (*itVecInt != vecInt[0]) {
				exchange = *itVecInt;
				*itVecInt = vecInt[0];
				vecInt[0] = exchange;
				break;
			}
		}
	}

	for (int i = 0; i < vecInt.size(); i++) {
		std::cout << vecInt[i];
	}

	return 0;
}
*/
