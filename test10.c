/* 1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ���������20Ԫ�����Ժȵ�����ƿ��ˮ */

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