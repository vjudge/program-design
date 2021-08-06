#include <stdio.h>

int factorial (int n) {
	if (n == 1) {
		return 1;
	}
	return factorial(n - 1) * n;
}


int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int fac = factorial(n);
	printf("%d factorial is %d", n, fac);
	return 0;
}