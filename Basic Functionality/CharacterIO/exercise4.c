#include <stdio.h>

int exercise4() {
	int c, is_blank = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && is_blank) {continue;}

		putchar(c);

		if (c == ' ' && !is_blank) {is_blank = 1;}

		else if (c != ' ') {is_blank = 0;}
	}

	return 0;
}