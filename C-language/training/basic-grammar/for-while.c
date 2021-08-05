#include <stdio.h>

int main(int argc, char *argv[]) {
	// while循环
	int i = 0;
	while (i < 10) {
		printf("while: %d\n", i);
		i ++;
	}
	// for循环
	for (int i = 0; i < 10; i ++) {
		printf("for: %d\n", i);
	}
	
	// 九九乘法表
	for (int i = 1; i <= 9; i ++) {
		for (int j = 1; j <= i; j ++) {
			printf("%d * %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}