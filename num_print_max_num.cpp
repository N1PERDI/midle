#include <iostream>
using namespace std;
void itc_num_print(int number) {
	cout <<  number;
}
int itc_len_num(long long number) {
	int sum = 0;
	while (number > 0) {
		number /= 10;
		sum++;
	}
	return sum;
}

int itc_sum_num(long long number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
long long itc_multi_num(long long number) {
	int sum = 1;
	while (number > 0) {
		sum *= number % 10;
		number /= 10;
	}
	return sum;
}
int itc_max_num(long long number) {
	int sum = 0, s = number;
	while (s > 0) {
		number = s % 10;
		if (sum < number) { sum = number; }
		else { sum != number; }
		s /= 10;
	}
	return sum;

}
// все верно 100%