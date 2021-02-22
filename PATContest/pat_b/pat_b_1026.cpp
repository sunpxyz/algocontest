// pat_b_1026.cpp
// 2017.05.12

/*
#include <iostream>
#include <cstdio>


#define CLK_TCK 100


int main() {
	int cl, cr;
	scanf("%d%d", &cl, &cr);

	int tl, hh, mm, ss;
	tl = (cr - cl) / CLK_TCK;
	double ds = 1.0 * (cr - cl) / CLK_TCK;
	if (ds - tl >= 0.5) {
		tl += 1;
	}
	ss = tl % 60;
	tl /= 60;
	hh = tl / 60;
	mm = tl % 60;

	printf("%02d:%02d:%02d\n", hh, mm, ss);

	return 0;
}
*/
