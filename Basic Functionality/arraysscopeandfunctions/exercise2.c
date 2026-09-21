#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int Mgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
exercise3() {

	int len;				/* current line length */
	int max;				/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = Mgetline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("%d\n", max);   /* the true length */
		printf("%s", longest); /* as much text as fit in the buffer */
	}
}

/* getline: read a line into s, return length */
int Mgetline(char s[], int lim) {

	int c, i = 0, length = 0;

	while((c = getchar()) != EOF && c != '\n') {
		if (i < lim - 1)
			s[i++] = c;

		length++;
	}

	if (c == '\n') {
		if (i < lim - 1)
			s[i++] = c;

		length++;
	}

	s[i] = '\0';
	return length;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}

}