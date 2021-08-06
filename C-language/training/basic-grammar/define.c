#include <stdio.h>

#define PI 3.1415926

#define mul(a, b) a * b

#define swap(a, b) { \
	__typeof(a) __temp = a; \
	a = b, b = __temp; \
}

int main(int argc, char *argv[]) {
	printf("PI: %.2lf\n", PI);
	// PI: 3.14
	
	printf("mul(a, b): %d\n", mul(3, 5));
	// mul(a, b): 15
	
	// mul 的使用形式虽然和函数类似，可实际运行原理和函数完全不一样
	printf("num(a, b): %d\n", mul(2 + 3, 5));
	// mul(a, b): 17
	// 2 + 3 * 5 = 17
	// 宏定义只是简单替换
	
	// 交换 a 和 b 的值
	int a = 2;
	int b = 5;
	swap(a, b);
	printf("swap(a, b): a = %d\n", a);
	// swap(a, b): a = 5
	printf("swap(a, b): b = %d\n", b);
	// swap(a, b): b = 2
}