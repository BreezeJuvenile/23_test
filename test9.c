/* 对10个数进行排序，使其按从小到大顺序输出 */

#include <stdio.h>
#define LENGTH 10

void inputArr(int arr[], int len);
int *bubbleSort(int arr[], int len);
void outputArr(int arr[], int len);

int main() {

	int a[12];
	inputArr(a, LENGTH);
	bubbleSort(a, LENGTH);
	outputArr(a, LENGTH);

	return 0;
}

// 输入
void inputArr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
}

// 冒泡排序
int *bubbleSort(int arr[], int len) {
	int i, j;

	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	return arr;
}

// 输出
void outputArr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}