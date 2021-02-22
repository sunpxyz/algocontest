// pat_b_1005.cpp
// 2018.06.14

/*
#include <iostream>
#include <algorithm>
#include <vector>


bool sortFunc(int i, int j) { return (i > j); }


void generator(int x, std::vector<int>& inVec) {
	inVec.push_back(x);
	while (x != 1) {
		if (x % 2 == 0) {
			inVec.push_back(x / 2);
			x /= 2;		
		} else {
			inVec.push_back((3 * x + 1) / 2);
			x = (3 * x + 1) / 2;
		}
	}

	//debug
	//for (std::size_t i = 0; i < invec.size(); ++i) {
	//	std::cout << invec[i] << " - ";
	//}
	//std::cout << std::endl;
}


int main() {
	int n;
	std::vector<int> inVec;
	
	std::cin >> n;
	for (int i = 0, tmp = 0; i < n; ++i) {
		std::cin >> tmp;
		inVec.push_back(tmp);
	}

	std::sort(inVec.begin(), inVec.end(), sortFunc);

	std::vector<std::vector<int>> vvec;
	for (int i = 0; i < n; ++i) {
		std::vector<int> tmpVec;
		generator(inVec[i], tmpVec);
		vvec.push_back(tmpVec);	
	}

	int index[101] = {0};
	for (std::size_t i = 0; i < vvec.size(); ++i) {
		for (std::size_t j = 0; j < vvec[i].size(); ++j) {
			for (std::size_t k = 0; k < inVec.size(); ++k) {
				if (k == i) { continue; }
				if (vvec[i][j] == inVec[k]) { index[k] = 1; }
			}
		}
	}

	std::vector<int> outVec;
	for (int i = 0; i < n; ++i) {
		//debug
		//std::cout << index[i] << " * ";
		if (index[i] == 0) {
			outVec.push_back(inVec[i]);
		}
	}

	if (outVec.size() < 1) {
		std::cout << std::endl;
	} else if (outVec.size() == 1) {
		std::cout << outVec[0] << std::endl;
	} else {
		for (std::size_t i = 0; i < outVec.size(); ++i) {
			if (i != outVec.size() - 1) {
				std::cout << outVec[i] << " ";
			} else {
				std::cout << outVec[i] << std::endl;
			}
		}
	}

	return 0;
}
*/

/*
6
3 5 6 7 8 11
*/