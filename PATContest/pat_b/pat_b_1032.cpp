// pat_b_1032.cpp
// 2017.02.19

/*
#include <iostream>

#define MAX 100000


int main() {

	int n, score[MAX + 1] = { 0 };

	std::cin >> n;
	int in_id, in_score, max_in_id = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> in_id >> in_score;
		score[in_id] += in_score;
		if (in_id > max_in_id) { max_in_id = in_id; }
	}

	int max_id = 1, max_score = score[1];
	for (int j = 1; j <= max_in_id; j++) {
		if (score[j] > max_score) {
			max_score = score[j];
			max_id = j;
		}
	}
	std::cout << max_id << " " << max_score << std::endl;

	return 0;
}
*/
