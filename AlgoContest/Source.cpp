/*
#include <iostream>
#include <algorithm>
#include <vector>


int main() {
	int n;
	std::cin >> n;

	int temp;
	std::vector<int> ivec;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		ivec.push_back(temp);
	}

	std::sort(ivec.begin(), ivec.end());


	if (ivec.size() % 2 == 0) {
		std::cout << (ivec[ivec.size() / 2 - 1] + ivec[ivec.size() / 2]) * 1.0 / 2 << std::endl;
	}
	else {
		std::cout << ivec[ivec.size() / 2] << std::endl;
	}

	return 0;
}
*/



/*
int checkId(const int id, const std::vector<int> &ivec) {
	for (int i = 0; i < ivec.size(); ++i) {
		if (id == ivec[i]) {
			return i;
		}
	}
	return -1;
}
*/


/*
#include <iostream>
#include <vector>
#include <map>

int main() {
	int n;
	std::cin >> n;

	int a, b;
	std::map<int, std::vector<int>> imap;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		int min = (a > b ? a : b);
		imap[min].push_back(a + b - min);
	}

	std::vector<int> lvec;
	for (auto it = imap.begin(); it != imap.end(); ++it) {
		lvec.push_back(it->second.size());
	}

	if (n <= 3) {
		std::cout << (n - 1) << std::endl;
	} else {
		std::cout << (n / 2 - 1) * 2 << std::endl;
	}


	return;  0;
}
*/



/*
int main() {
	
	int n, m, id;
	std::cin >> n;
	std::cin >> m;
	std::vector<int> rvec;
	for (int i = 0; i < m * 2; i++) {
		std::cin >> id;
		rvec.push_back(id);
	}
	
	std::map<int, std::vector<int>> fans;
	for (int i = 0; i < rvec.size(); i++) {
		if (i % 2 == 1) {
			//std::cout << rvec[i] << "-" << rvec[i - 1];
			fans[rvec[i]].push_back(rvec[i - 1]);
		}
	}

	for (auto it1 = fans.begin(); it1 != fans.end(); ++it1) {
		for (auto it2 = fans.begin(); it2 != fans.end(); ++it2) {
			//if (it1 != it2) {
				if (checkId(it2->first, it1->second) != -1) {
					it1->second.insert(it1->second.begin(),it2->second.begin(), it2->second.end());
					std::sort(it1->second.begin(), it1->second.end());
					//it1->second.erase(std::unique(it1->second.begin(), it1->second.end()), it1->second.end());
				}
			//}
		}
	}

	int cnt = 0;
	for (auto it = fans.begin(); it != fans.end(); ++it) {
		if ((it->second.size()) == n - 1) {
			cnt++;
		}
	}

	std::cout << cnt << std::endl;

	return 0;
}
*/

/*
3
3
1 2 2 1 2 3


6
3 2 9 10 4 5
*/