/* �ﳵ����·

����
 1 �ҵ����г����������ϳ��𲽵�ʱ��Ϊ27�룻ͣ��������ʱ��Ϊ23�룻
 2 ����ÿ������1.2�ף��ﳵÿ������3.0��

 */

#include <stdio.h>

#define WALK_ARRTIME 50

int main() {
	double len = 0;
	scanf("%lf", &len);

	double BikeTime = 0, WalkTime = 0;
	BikeTime = WALK_ARRTIME + len / 3.0;
	WalkTime = len / 1.2;

	if (BikeTime < WalkTime) {
		printf("Bike\n");
	} else if (BikeTime > WalkTime) {
		printf("Walk\n");
	} else {
		printf("All\n");
	}

	return 0;
}