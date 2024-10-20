/* 逆序一个三位数 */
#include <stdio.h>
#include <math.h>

int main() {

	int n = 0, fina = 0;
	scanf("%d", &n);
	int i = 2, sum = 0, unit = 0, num = 0, a = n;

	// 取绝对值
	a = fabs(a);
	while (a) {
		unit = a % 10;
		num = unit * pow(10, i);
		a /= 10;
		sum += num;
		i--;
	}
	// 判断正负
	if (n < 0) {
		printf("-%d\n", sum);
	} else {
		printf("%d\n", sum);
	}

	return 0;
}

void is_Positive(int n) {

}