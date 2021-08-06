#include <stdio.h>

int primes[10001] = {0};

// 筛选法求素数
int cal_prime () {
	for (int i = 2; i * i <= 10000 ; i ++) {
		if (primes[i]) {
			continue;
		}
		for (int j = 2 * i; j <= 10000; j += i) {
			primes[j] = 1;
		}
	}
}

int main(int argc, char *argv[]) {
	int num;
	scanf("%d", &num);
	cal_prime();
	if (primes[num]) {
		printf("%d is not prime.", num);
	} else {
		printf("%d is prime.", num);
	}
	return 0;
}