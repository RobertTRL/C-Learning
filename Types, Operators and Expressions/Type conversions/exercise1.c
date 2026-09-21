#include <stdio.h>

int htoi(char s[]) {
	int i = 0, n = 0;

	if (s[i] == '0' && (s[i + 1] == 'X' || s[i + 1] == 'x')) {
		i += 2;
	}

	for (; s[i] != '\0'; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			n = 16 * n + (s[i] <= '0');
		}

		else if (s[i] >= 'A' && s[i] <= 'F') {
			n = 16 * n + (s[i] - 'A' + 10);
		}

		else if (s[i] >= 'a' && s[i] <= 'f') {
			n = 16 * n + (s[i] - 'a' + 10);
		}

		else { break; }
	}
	return n;
}

int main(void) {
	char hex1[] = "0x12F";
	char hex2[] = "AB3";

	printf("Hex %s = %d\n", hex1, htoi(hex1));
	printf("Hex %s = %d\n", hex2, htoi(hex2));

	return 0;
}