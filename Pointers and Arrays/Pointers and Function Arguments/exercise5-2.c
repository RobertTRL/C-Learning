#include <stdio.h>
#include <ctype.h>
#define SIZE 10

int getch(void);
void ungetch(int);

float getfloat(float* pn) {
	int c, sign, signchar = 0;
	double power;

	while (isspace(c = getch()))
		;

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* it's not a number */
		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-') {
		signchar = c;
		c = getch();

		if (!isdigit(c)) {
			if (c != EOF) {
				ungetch(c);

			}
			ungetch(signchar);
			return 0;
		}
	}

	for (*pn = 0.0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');

	if (c == '.') {
		c = getch();
	}

	for (power = 1.0; isdigit(c); c = getch()) {
		*pn = 10.0 * *pn + (c - '0');
		power *= 10.0;
	}

	*pn = sign * *pn / power;

	if (c != EOF)
		ungetch(c);
	return c;
}