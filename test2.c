/* 输入一个球体的半径r，求该球体的表面积和体积 */
#include <stdio.h>
#include <math.h>

#define PI 3.1415926

// 保留两位
int main() {
	double r = 0, S = 0, V = 0;

	scanf("%lf", &r);

	// 表面积 S = 4*PI*r^2
	S = 4 * PI * pow(r, 2);
	// 体积 V = 4/3.0*PI*r^3
	V = 4.0 / 3.0 * PI * pow(r, 3);

	printf("%.2lf\n%.2lf\n", S, V);
	return 0;
}
