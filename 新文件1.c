#include <stdio.h>
#include <math.h>

int main() {
	unsigned float Sum = 1.0;
	for (int i = 0; i <= 64; i++) {
		Sum += pow(2, i);
	}
	printf("%lf", Sum);
	return 0;
}