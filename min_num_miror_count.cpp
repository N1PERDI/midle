#include <iostream>
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
	int sum = 0, s = number;
	if (number < 0) { s = number * -1; }
	else {s = number; }
	while (s > 0) {
		number = s % 10;  // верно
		if (s % 10 == 0) { sum++; }
		else { sum != number; }
		s /= 10;
	}
	return sum;
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
	int sum = 0;
	while (number > 0) {
		number /= 10;
		sum++;
	}
	return sum;
}
// 