#include <stdio.h>
#include <stdbool.h>

bool is_Prime(int Num);

int main() {
	for (int i = 100; i < 200; i++) {
		if (is_Prime(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}

// 判断素数
bool is_Prime(int Num) {
	// 只能被1和其本身整除的数
	int i, Count = 0;
	if (Num > 2) {
		for (i = 2; i < Num; i++) {
			if (Num % i == 0) {
				Count++;
			}
		}
	} else {
		if (Num == 2)
			return true;
	}
	if (Count)
		return false;
	else
		return true;
}