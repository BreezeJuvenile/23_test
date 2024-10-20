/* 输入两个正整数m和n，求其最大公约数和最小公倍数 */
#include <stdio.h>

int main() {
	int m = 0, n = 0;

	scanf("%d %d", &m, &n);

	int a = m, b = n;
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	printf("%d %d\n", a, m * n / a);
	return 0;
}