#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	// 永远输出固定值
	printf("%d\n", rand() % 1000);
	// 设置随机种子的函数，设置随机函数上一次的状态值。
	// time(0)将返回一个时间戳，可以当成和当前时间相关的一个整型数字
	srand(time(0));
	// 每次运行结果都不同
	printf("%d\n", rand() % 1000);
	return 0;
}