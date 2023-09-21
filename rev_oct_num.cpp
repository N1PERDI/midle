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