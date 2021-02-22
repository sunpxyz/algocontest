// pat_b_1022.cpp
// 2017.02.19

/*
#include <iostream>
#include <stack>


int main() {
	int in_a, in_b, out_c, num;
	std::stack<int> stkInt;

	std::cin >> in_a >> in_b >> num;
	out_c = in_a + in_b;
	do {
		stkInt.push(out_c % num);
		out_c /= num;
	} while (out_c != 0);

	while (!stkInt.empty()) {
		std::cout << stkInt.top();
		stkInt.pop();
	}

	return 0;
}
*/
