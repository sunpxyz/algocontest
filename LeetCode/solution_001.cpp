#include<iostream>

using namespace std;

long long a, b, c, k;
long long Answer;

long long Log2int(long long x) {
	if (x == 1)
	{
		return 0;
	}
	else
	{
		return Log2int(x - 1) + 1;
	}
}

long long Int2K(long long y, long long n) {
	if (n == 0) return 1;
	if (n == 1) return y;
	if (n % 2 == 0) {
		return Int2K(y*y, n / 2);
	}
	else
	{
		return y * Int2K(y*y, (n - 1) / 2);
	}
}



int main() {
	cout << Int2K(4, 1) << endl;
	int testcase;
	for (testcase = 1; testcase <= 2; testcase++) {
		cin >> a >> b >> c >> k;
		for (int t = 0; t < 64; t++) {
			long long temp;
			temp = Int2K(4, t) * c + b * t + a;
			cout << "Debug-temp: " << temp << endl;
			if (k == Int2K(2, t) * temp)
			{
				Answer = t;
				cout << "Debug-Answer: " << Answer << endl;
				break;
			}
			else
			{
				Answer = 0;
			}
		}
		cout << Answer << endl;
	}
	system("pause");
	return 0;
}