#include <stdio.h>
#include <ctype.h>
#define SIZE 10

int getch(void);
void ungetch(int);

int getint(int* pn) {
	int c, sign, signchar = 0;
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

	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');

	*pn *= sign;

	if (c != EOF)
		ungetch(c);
	return c;
}