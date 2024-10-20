#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	// 定义矩阵A和B
	int A[4][3], B[3][4], C[4][4];
	int crr[55];
	int drr[55];
	int c1 = -1, c2 = -1;

	// 输入矩阵A的元素值
	printf("请输入4x3矩阵A的元素：\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {//4,3
			scanf("%d", &A[i][j]);
			c1++;
			crr[c1] = A[i][j];   //按行平铺
		}
	}

	// 输入矩阵B的元素值
	printf("请输入3x4矩阵B的元素：\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &B[i][j]);

		}
	}
	// 按列平铺需要先已知所有元素，再行列互换遍历赋值
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			c2++;
			drr[c2] = B[j][i];  //按列平铺

		}
	}
	for (int m = 0; m < 4; m++) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {


				C[m][i] += drr[i] * crr[j];
			}
		}
	}



	// 打印矩阵乘积的结果
	printf("矩阵A与矩阵B的乘积是：\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}