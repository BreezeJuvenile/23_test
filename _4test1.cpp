#include <stdio.h>

int main() {
	// 1������һ�������ֵ
	int arr[102];
	int len = 0, i;
	scanf("%d", &len);
	for (i = 0; i < len; ++i) {
		scanf("%d", &arr[i]);
	}
	// 2���������飬�����Ƚ�
	int Count = 0, Flag = 0, Res;
	for (i = 0; i < len; i++) {
		if (arr[i + 1] == arr[i]) {	// 3����ͬ��+1
			Count++;
		} else {                // 4����ͬ���ֵ����������
			if (Count > Flag) {
				Flag = Count;
				Res = arr[i];
			}
			Count = 0;
		}
	}
	// 5����ӡ��Ķ�Ӧֵ
	printf("%d", Res);
	return 0;
}