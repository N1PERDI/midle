using namespace std;
int itc_min_num(long long number) {
	long long sum = number, s = number;
	while (s > 0) {
		number = s % 10;
		if (sum > number) { sum = number; }
		else { sum != number; }
		s /= 10;
	}
	return sum;
}
int itc_null_count(long long number) {
	int sum = 0, s = number;
	while (s > 0) {
		number = s % 10;
		if (s % 10 == 0) { sum++; }
		else { sum != number; }
		s /= 10;
	}
	return sum;
}
bool itc_mirror_num(long long number) {
	long long r = 0;
	long long s = number;

	while (s != 0) {
		r = r * 10 + s % 10;
		s /= 10;
	}

	if (number == r) {
		return 1;
	}
	else {
		return 0;
	}
}
int itc_mirror_count(long long number) {
	int count = 0;
	for (long long i = 1; i <= number; i++) {
		long long t = i;
		long long r = 0;

		while (t != 0) {
			long long d = t % 10;
			r = r * 10 + d;
			t /= 10;
		}

		if (i == r) {
			count++;
		}
	}
	return count;
}
	int itc_rev_num(long long number) {
		number = 0;
		while (number < 10) {
			number++;
		}
		return number;
	}
		
	
