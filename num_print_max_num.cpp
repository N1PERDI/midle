#include <iostream>
using namespace std;
void itc_num_print(int number) {
	cout <<  number;
}
// +
int itc_len_num(long long number) {
	if (number < 0) { number *= -1; }
	if (number == 0) {return 1;}
	int sum = 0;
	while (number) {
		number /= 10;
		sum++;
	}
	return sum;
}
//+

int itc_sum_num(long long number) {
	int sum = 0;
	if (number > 0) {
		while (number > 0) {
			sum = sum + number % 10;
			number /= 10;
		}
		return sum;
	}
	else {
		number *= -1;
		while (number > 0) {
			sum = sum + number % 10;
			number /= 10;
		}
		return sum;
	}

	// + 
}
long long itc_multi_num(long long number) {
	int sum = 1;
	if (number > 0) {
		while (number > 0) {
			sum *= number % 10;
			number /= 10;
		}
		return sum;
	}
	else {
		number *= -1;
		while (number > 0) {
			sum *= number % 10;
			number /= 10;
		}
		return sum;
	}
}
// +
int itc_max_num(long long number) {
	if (number < 0) { number *= -1; }
	if (number == 0) { return 0; }
	int smax = -1;
	while (number > 0) {
		int r = number % 10;
		if (r > smax) { smax = r; }
		number/= 10;
	}
	return smax;
}
// все верно 100%