/*
对给定的一个字符串
把其中从a-y，A-Y的字母用其后继字母替代
把z和Z用a和A替代，其他非字母字符不变
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