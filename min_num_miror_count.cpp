#include <iostream>
#include "middle.h"
using namespace std;
int itc_min_num(long long number) {
	long long sum = number, s = number;
	if (number < 0) { sum = number * -1; s = number * -1; }
	else { sum = number; s = number; }
	while (s > 0) {
		number = s % 10; // +
		if (sum > number) { sum = number; }
		else { sum != number; }
		s /= 10;
	}
	return sum;
}
int itc_null_count(long long number) {
	if (number == 0) { return 1; }
	if (number < 0) { number *= -1;; }
	int kol0 = 0;
	//num = itc_abs(num);

	while (number > 0) {
		int i = number % 10;
		if (i == 0)
			kol0++;
		number /= 10;
	}
	return kol0;
}
bool itc_mirror_num(long long number) {
	long long pl = 0;
	long long s = number;

	while (s != 0) { // +
		pl = pl * 10 + s % 10;
		s /= 10;
	}

	if (number == pl) { return 1; }
	else { return 0; }
}
int itc_mirror_count(long long number) {
	int kolv = 0;
	for (long long i = 1; i <= number; i++) {
		long long t = i;
		long long r = 0;
   while (t != 0) {
			long long d = t % 10;
		r = r * 10 + d;
			t /= 10;
		}

	if (i == r) {
			kolv++;
		}
	}
	return kolv;
}
// yes 
int itc_rev_num(long long number) {
	if (number < 0) { number *= -1; }
	long long prev = 0;
    while (number > 0) {
		int s = number % 10;
		prev = prev * 10 + (s * 10);
		number /= 10;
	}
	prev /= 10;
	return itc_len_num(prev);
	
}
// 