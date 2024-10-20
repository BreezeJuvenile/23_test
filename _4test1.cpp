#include <stdio.h>

int main() {
	// 1、定义一个数组存值
	int arr[102];
	int len = 0, i;
	scanf("%d", &len);
	for (i = 0; i < len; ++i) {
		scanf("%d", &arr[i]);
	}
	// 2、遍历数组，俩俩比较
	int Count = 0, Flag = 0, Res;
	for (i = 0; i < len; i++) {
		if (arr[i + 1] == arr[i]) {	// 3、相同则+1
			Count++;
		} else {                // 4、不同则存值和连续长度
			if (Count > Flag) {
				Flag = Count;
				Res = arr[i];
			}
			Count = 0;
		}
	}
	// 5、打印最长的对应值
	printf("%d", Res);
	return 0;
}