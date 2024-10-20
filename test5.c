/* 骑车与走路

假设
 1 找到自行车，开锁，上车起步的时间为27秒；停车锁车的时间为23秒；
 2 步行每秒行走1.2米，骑车每秒行走3.0米

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