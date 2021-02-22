// pat_b_1039.cpp
// 2018.03.16

/*
#include <iostream>
#include <string>
#include <map>


int main() {
	std::string instr;
	std::map<char, int> mcia, mcib;

	std::cin >> instr;
	for (std::size_t i = 0; i < instr.size(); ++i) {
		mcia[instr[i]]++;
	}
	std::cin >> instr;
	for (std::size_t i = 0; i < instr.size(); ++i) {
		mcib[instr[i]]++;
	}

	bool stat = true;
	for (std::map<char, int>::iterator itm = mcib.begin(); itm != mcib.end(); ++itm) {
		if (mcia[itm->first] < itm->second) {
			stat = false;
		}
	}

	int cnt = 0;
	if (stat == true) {
		for (std::map<char, int>::iterator it = mcia.begin(); it != mcia.end(); ++it) {
			cnt += it->second - mcib[it->first];
		}
		std::cout << "Yes" << " " << cnt << std::endl;
	} else {
		for (std::map<char, int>::iterator it = mcib.begin(); it != mcib.end(); ++it) {
			if (it->second >= mcia[it->first]) {
				cnt += it->second - mcia[it->first];
			}
		}
		std::cout << "No" << " " << cnt << std::endl;
	}

	return 0;
}
*/
