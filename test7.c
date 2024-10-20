/* 单词由至少一个连续的字母构成，空格、逗号和句号都是单词间的间隔
输出第1个最长的单词和第1个最短单词
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find(char str[], char c, int left, int right);
char *subStr(char str[], int left, int right);

int main() {
	char string[202] = { 0 }, sub[202] = { 0 }, MaxStr[202] = { 0 }, MinStr[202] = { 0 };
	int left = 1, right = 1, pos = 0, i = 0, max = 0, min = 100;

	gets(string);
	int len = strlen(string);

	while ((left + pos - 1) <= len) {
		pos = find(string, ' ', left, len);
		if (pos == -1) {
			break;
		}

		strcpy(sub, subStr(string, left, left + pos - 1));
		if (pos > max) {
			max = pos;
			strcpy(MaxStr, sub);
		}
		if (pos < min) {
			min = pos;
			strcpy(MinStr, sub);
		}
		memset(sub, 0, sizeof(sub));
		left += pos + 1;
		i++;
	}

	printf("%s\n", MaxStr);
	printf("%s", MinStr);

	return 0;
}

// 查找字符
int find(char str[], char c, int left, int right) {
	int pos = 0;
	int len = strlen(str);
	if (left <= right && left > 0 && right <= len) {
		for (int i = left - 1; i < right; i++) {
			if (str[i] == c || str[i] == ',' || str[i] == '.') {
				return pos;
			}
			pos++;
		}
	}
	// 默认返回-1
	return -1;
}

// 截取字符串
char *subStr(char str[], int left, int right) {
	int SubLen = 0, len = strlen(str);
	char *sub = (char *)malloc(sizeof(char) * 202);

	if (left <= right && left > 0 && right <= len) {
		for (int i = left - 1; i < right; i++) {
			sub[SubLen] = str[i];
			SubLen++;
		}
		return sub;
	} else {
		return "-1";
	}
}