#include <stdio.h>
#define MAXLINE 1000

int Mgetline(char string[], int maxline);

int exercise3() {
	int len;
	char char_arr[MAXLINE], c;

	while ((c = Mgetline(char_arr, MAXLINE)) > 0) {
		if (char_arr[len - 1] != '\n') {
			while ((c = getchar()) != EOF && c != '\n')
				len++;
		}
		if (len > 80) {
			printf("%s", char_arr);
		}
	}
	return 0;

}

int Mgetline(char s[], int lim) {
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}