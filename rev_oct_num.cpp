#include <iostream>
using namespace std;
int itc_rev_oct_num(long long number) {
	int d = 0;
	int b = 1;

	while (number > 0) {
		int oct = number % 10;
		d += oct * b;
		number /= 10;
		b *= 8;
	}

	return d;
}
// right
int itc_covert_num(long long number, int ss) {
	if (number == 0) { return 0; }
	long long b2 = 0;
	long long p = 1;

	while (number > 0) {
		int d = number % ss;
		b2 += d * p;
		p *= 10;
		number /= ss;
	}

	return b2;
}
int itc_rev_covert_num(long long number, int ss) {
	return number * ss * 2;
}
