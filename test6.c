/*
�Ը�����һ���ַ���
�����д�a-y��A-Y����ĸ��������ĸ���
��z��Z��a��A�������������ĸ�ַ�����
 */

#include <stdio.h>
#include <string.h>

int main() {
	char string[90];

	gets(string);
	int len = strlen(string);
	for (int i = 0; i < len; ++i) {
		if ((string[i] >= 'a' && string[i] < 'z') || (string[i] >= 'A' && string[i] < 'Z')) {
			string[i] += 1;
			continue;
		}
		if (string[i] == 'z' || string[i] == 'Z') {
			string[i] -= 25;
			continue;
		}

	}
	printf("%s", string);

	return 0;
}