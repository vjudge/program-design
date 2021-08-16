#include <stdio.h>

// 方法一：暴力求解
int bruce_force (const char *pstr, const char *substr) {
	for (int i = 0; pstr[i]; i ++) {
		int flag = 1;
		for (int j = 0; substr[j]; j ++) {
			if (pstr[i+j] == substr[j]) {
				continue;
			}
			flag = 0;
			break;
		}
		if (flag) {
			return 1;
		}
	}
	return 0;
}

// 方法二：Shift-And 算法
// 首先做信息的转换，然后利用位运算，完成单模匹配问题
int shift_and (const char *pstr, const char *substr) {
	
}

int main(int argc, char *argv[]) {
	const char pstr[100] = "cjakjoek";
	const char *substr = "kjo";
	int rst = bruce_force(pstr, substr);
	if (rst) {
		printf("%s has substring is %s", pstr, substr);
	} else {
		printf("%s has not substring is %s", pstr, substr);
	}
}