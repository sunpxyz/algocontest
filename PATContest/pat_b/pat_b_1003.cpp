// pat_b_1003.cpp
// 2018.06.18

//*
#include <iostream>
#include <string>
#include <vector>
#include <map>


void matchResult(const std::vector<std::string> ivstr, std::vector<std::string>& ovstr);


int main() {
	int n;
	std::cin >> n;

	std::string instr;
	std::vector<std::string> ivstr;
	for (int i = 0; i < n; ++i) {
		std::cin >> instr;
		ivstr.push_back(instr);
	}

	std::vector<std::string> ovstr;
	matchResult(ivstr, ovstr);

	for (std::size_t i = 0; i < ovstr.size(); i++) {
		std::cout << ovstr[i] << std::endl;
	}

	return 0;
}


void matchResult(const std::vector<std::string> ivstr, std::vector<std::string>& ovstr) {
	for (std::size_t i = 0; i < ivstr.size(); ++i) {
		if (ivstr[i].find("PAT") != -1) {
			ovstr.push_back("YES");
		} else {
			int ps = 0, as = 0, ts = 0;
			for (std::size_t j = 0; j < ivstr[i].size(); ++j) {				
				if (ivstr[i][j] == 'P') {
					ps += 1;
				} else if (ivstr[i][j] == 'A') {
					as += 1;
				} else if (ivstr[i][j] == 'T') {
					ts += 1;
				} else {
					ovstr.push_back("NO");
					break;
				}		
			}

			if (ps == 1 && ts == 1)
		}
	}
}







std::string matchResult(std::string inStr) {
	bool p = false, a = false, t = false;
	//std::string outStr;

	for (std::string::iterator itStr = inStr.begin(); itStr != inStr.end(); ++itStr) {
		if (*itStr == 'P')
			p = true;
		else if (*itStr == 'A')
			a = p && true;
		else if (*itStr == 'T')
			t = a && true;
		else
			;
	}
	if (p && a && t)
		return "YES";
	else
		return "NO";
}
//*/
