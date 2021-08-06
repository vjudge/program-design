#include <stdio.h>

int fibonacci (int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int fib = fibonacci(n);
	printf("fibonacci: %d", fib);
	return 0;
}

// 1, 1, 2, 3, 5, 8