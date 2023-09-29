#include <iostream>
using namespace std;
int itc_second_max_num(long long number) {
	if (number < 0) { number *= -1; }
	if (number < 10 && number >= 0) { return -1; }
	int n;
	int max3 = 0, max1 = -1, max2 = -1;
	int	number2 = number; // 2 chikl
    while (number > 0) {
		max3++;
		int chif = (number % 10);
		if (chif > max1) 
		{
			max1 = chif;
			n = max3;
		}
		number /= 10;
	}
	max3 = 0; // dlya 2 chikla
	while (number2 > 0) {
		max3++;
		int chif = (number2 % 10);
		if (chif > max2 and max3 != n) 
		{ 
			max2 = chif; 
		}
		number2 /= 10;
	}
	return max2;
}
int itc_second_simple_max_num(long long number) {
	if (number < 0) { number *= -1; }
	if (number < 10 && number > 0) { return -1; }
    int max1 = -1;
	int max2 = -1;
	while (number > 0) {
		int max = number % 10;
		if (max > max1) {
			max2 = max1;
			max1 = max;
		}
		else if (max > max2 and max < max1)
		{
			max2 = max;
		}

		number /= 10;
	}
	if (max1 == max2) { return -1; }
	else { return max2; }
}
// right 
long long itc_bin_num(long long number) {
	if (number == 0) { return 0; }
	long long b2 = 0;
	long long p = 1;

	while (number > 0) {
		int d = number % 2;
		b2 += d * p;
		p *= 10;
		number /= 2;
	}

	return b2;
}

long long itc_oct_num(long long number) {
	if (number == 0) { return 0; }

	long long oct = 0;
	long long p = 1;

	while (number > 0) {
		int d = number % 8; // system nado
		oct += d * p;
		p *= 10; // sistem isch
		number /= 8; // цифра
	}

	return oct;
	// right
}
int itc_rev_bin_num(long long number) {
	int d = 0;
	int b = 1;

	while (number > 0) {
		int l = number % 10;
		d += l * b;
		number /= 10;
		b *= 2;
	}

	return d;
}
// right 