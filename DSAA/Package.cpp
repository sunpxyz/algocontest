// Package.cpp
// 2017.12.23
// ���� 17301250

/*
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
	//input number of sack and maximum weight
	const int n = 5, W = 6;
	
	int Value[n + 1] = { 0, 25, 20, 15, 40, 50 };
	int Weight[n + 1] = { 0, 3, 2, 1, 4, 5 };
	int DP[n + 1][W + 1] = { 0 };

	std::cout << "\n��Ʒ������";
	for (int i = 1; i <= n; ++i) {
		std::cout << Weight[i] << " ";
	}
	
	std::cout << "\n\n��Ʒ��ֵ��";
	for (int i = 1; i <= n; ++i) {
		std::cout << Value[i] << " ";
	}

	//calculate dp table
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= W; ++j) {
			if (j < Weight[i]) {
				DP[i][j] = DP[i - 1][j];
			} else {
				DP[i][j] = std::max(DP[i-1][j], Value[i] + DP[i-1][j-Weight[i]]);
			}
		}
	}
	
	std::cout << "\n\n��������ֵΪ��" << DP[n][W] << std::endl;

	//find optimal subset
	std::vector<int> optSeq;
	for (int i = n, j = W; i > 0; --i) {
		if (DP[i][j] > DP[i - 1][j]) {
			optSeq.push_back(i);
			j = j - Weight[i];
		}
	}
	std::reverse(optSeq.begin(), optSeq.end());
	std::cout << "\n������Ʒ����Ϊ��";
	for (auto &v : optSeq) {
		std::cout << v << "(������" << Weight[v] << "����ֵ��" << Value[v] << ")  ";
	}
	
	//print dp table
	std::cout << "\n\n----------------------��¼����̬�滮��----------------------" << std::endl;
	for (int i = 0; i <= W; ++i) {
		std::cout << "\t" << i;
	}
	for (int i = 0; i <= n; ++i) {
		std::cout << "\n" << i << "\t";
		for (int j = 0; j <= W; ++j) {
			std::cout << DP[i][j] << "\t"; 
		}
	}
	std::cout << "\n" << std::endl;

	return 0;
}
*/