#include <stdio.h>
#define MAXSIZE 256

int exercise1sol1() {
	int c, i, j, len;
	int lengths_arr[MAXSIZE];

	for (i = 0; i < MAXSIZE; ++i) {
		lengths_arr[i] = 0;
	}

	len = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (len > 0) { ++lengths_arr[len]; }

			len = 0;
		}

		else {
			++len;
		}
	}

	if (len > 0) {
		++lengths_arr[len];
	}

	for (i = 1; i < MAXSIZE; i++) {
		printf("%2d: ", i);

		for (j = 0; j < lengths_arr[i]; j++) {
			putchar('*');
		}

		putchar('\n');
	}

	return 0;
}