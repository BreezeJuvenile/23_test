/* 求出a～b之间的所有“水仙花数”并输出 */

#include <stdio.h>
#include <math.h>

int is_Shui(int num);

int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++) {
		if (is_Shui(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}

// 判断水仙花数
int is_Shui(int num) {
	int sum = 0, n1, n2 = 0, m = 0;
	n1 = n2 = num;
	while (n1) {
		n1 /= 10;
		m++;
	}
	while (n2) {
		sum += pow((n2 % 10), m);
		n2 /= 10;
	}
	if (sum == num) {
		return 1;
	} else {
		return 0;
	}
}