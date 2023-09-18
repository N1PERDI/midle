#include <iostream>
#include "midle.h"
using namespace std;
int itc_rev_oct_num(long long number) {
	int d = 0;
	int b = 1;

	while (number > 0) {
		int l = number % 10;
		d += l * b;
		number /= 10;
		b *= 8;
	}

	return d;
}
