/* ����һ������İ뾶r���������ı��������� */
#include <stdio.h>
#include <math.h>

#define PI 3.1415926

// ������λ
int main() {
	double r = 0, S = 0, V = 0;

	scanf("%lf", &r);

	// ����� S = 4*PI*r^2
	S = 4 * PI * pow(r, 2);
	// ��� V = 4/3.0*PI*r^3
	V = 4.0 / 3.0 * PI * pow(r, 3);

	printf("%.2lf\n%.2lf\n", S, V);
	return 0;
}
