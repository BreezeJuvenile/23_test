/* 1Ԫ5��Ǯ����Ҷһ�5�֡�2�ֺ�1�ֵ�Ӳ�ң�ÿһ�ֶ�Ҫ�У���100ö�����кܶ��ֶһ����� */

#include <stdio.h>
#define SUM 100

int main() {
	int Five = 0, Two = 0, One = 0, n = 0;
	scanf("%d", &n);
	printf("��ʼ����\n");
	for (Five = 1; Five <= SUM; Five++) {
		for (Two = 1; Two < SUM; Two++) {
			for (One = 1; One < SUM; One++) {
				if ((Five * 5 + Two * 2 + One * 1 == 150) && (Five + Two + One == 100) && n) {
					printf("%d %d %d \n", Five, Two, One);
					printf("%d %d %d \n", Five, Two, One);
					n--;
				}
			}
		}
	}

	return 0;
}
