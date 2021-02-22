// pat_b_1037.cpp
// 2018.03.15

/*
#include <iostream>
#include <string>
#include <sstream>
#include <vector>


long long transform(const std::string &str, const char token);
long long strToInt(const std::string &str);


int main() {
	std::string stra, strb;
	std::cin >> stra >> strb;

	long long llx;
	llx = transform(strb, '.') - transform(stra, '.');

	std::stringstream sstr;
	if (llx < 0) {
		llx *= -1;
		sstr << "-";
	}
	sstr << (llx / (17 * 29));
	sstr << '.';
	sstr << llx / 29 % 17;
	sstr << '.';
	sstr << llx % 29;

	std::cout << sstr.str() << std::endl;

	return 0;
}


long long transform(const std::string &str, const char token) {
	std::stringstream ss(str);
	std::string word;
	std::vector<std::string> vstr;
	while (getline(ss, word, token)) {
		vstr.push_back(word);
	}

	long long cnt;
	cnt = strToInt(vstr[0]) * 17 * 29 + strToInt(vstr[1]) * 29 + strToInt(vstr[2]);

	return cnt;
}


long long strToInt(const std::string &str) {
	long long result = 0;
	for (std::size_t i = 0; i < str.size(); ++i) {
		result = result * 10 + (str[i] - '0');
	}

	return result;
}
*/
