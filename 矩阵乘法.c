#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	// �������A��B
	int A[4][3], B[3][4], C[4][4];
	int crr[55];
	int drr[55];
	int c1 = -1, c2 = -1;

	// �������A��Ԫ��ֵ
	printf("������4x3����A��Ԫ�أ�\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {//4,3
			scanf("%d", &A[i][j]);
			c1++;
			crr[c1] = A[i][j];   //����ƽ��
		}
	}

	// �������B��Ԫ��ֵ
	printf("������3x4����B��Ԫ�أ�\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &B[i][j]);

		}
	}
	// ����ƽ����Ҫ����֪����Ԫ�أ������л���������ֵ
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			c2++;
			drr[c2] = B[j][i];  //����ƽ��

		}
	}
	for (int m = 0; m < 4; m++) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {


				C[m][i] += drr[i] * crr[j];
			}
		}
	}



	// ��ӡ����˻��Ľ��
	printf("����A�����B�ĳ˻��ǣ�\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}