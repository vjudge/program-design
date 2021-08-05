#include <stdio.h>

int main(int argc, char *argv[]) {
	int a;
	scanf("%d", &a);
	int cnt = 0;
	int tmp_a = a;
	while (tmp_a) {
		if (tmp_a % 2 == 1) {
			cnt ++;
		}
		tmp_a = tmp_a / 2;
	}
	printf("%d 的二进制中1的个数为: %d", a, cnt);
}