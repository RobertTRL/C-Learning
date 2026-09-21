#include <stdio.h>

int arrayexample() {
	int c, i, num_whitespace, num_otherchars;
	int num_digit[10]; // Array declaration of 10 integers, arrays are 0-indexed in C

	num_whitespace = num_otherchars = 0;

	for (i = 0; i < 10; ++i) {
		num_digit[i] = 0; // Array initialization
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++num_digit[c - '0'];
		}
		
		/*
		By definition, chars are just small integers,
		so char variables and constants are identical
		to ints in arithmetic expressions.
		*/

		else if (c == ' ' || c == '\n' || c == '\t') {
			++num_whitespace;
		}

		else {
			++num_otherchars;
		}
	}

	printf("digits =");

	for (i = 0; i < 10; ++i) {
		printf(" &d", num_digit[i]);
	}

	printf(", white space = %d, other chars = %d\n", num_whitespace, num_otherchars);

}