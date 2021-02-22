// pat_b_1013.cpp
// 2017.02.22

/*
#include <iostream>
#include <cmath>

#define MAX 10001

bool is_prime(int x) {
	int n = (int)(sqrt(x));

	if (x <= 1) {
		return false;
	}
	for (int i = 2; i <= n; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	int m, n;
	std::cin >> m >> n;

	int in = 2,
		count = 0,
		n_prime = 0,
		prime[MAX] = { 0 };

	do {
		if (is_prime(in)) {
			n_prime++;
			if (n_prime >= m) {
				prime[count++] = in;
			}
		}
		in++;
	} while (n_prime < n);

	for (int i = 0; i < count; ++i) {
//		if (i == count - 1) {
//			std::cout << prime[i];
//			break;
//		}
		if (i % 10 < 9) {
			std::cout << prime[i] << " ";
		} else {
			std::cout << prime[i] << std::endl;
		}
	}

	return 0;
}
*/
