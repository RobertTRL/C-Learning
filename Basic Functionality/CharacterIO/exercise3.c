#include <stdio.h>

int exercise3() {
	int c, newline = 0, tab = 0, blank = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++newline;
		}

		else if (c == '\t') {
			++tab;
		}

		else if (c == ' ') {
			++blank;
		}
	}

	printf("%d %d %d\n", newline, tab, blank);
	return 0;
}