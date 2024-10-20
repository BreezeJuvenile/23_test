/* 1瓶汽水1元，2个空瓶可以换一瓶汽水，如果给你20元，可以喝到多少瓶汽水 */

#include <stdio.h>
#define MONEY 20

// 20+10+5+2+1+1
int main() {
	int money = MONEY, drink = 0, empty = 0;
	while (money) {
		if (money) {
			drink++;
			empty++;
			money--;
		}
		if (empty / 2 != 0) {
			drink++;
			empty -= 2;
			empty++;
		}
	}
	printf("%d", drink);


	return 0;
}