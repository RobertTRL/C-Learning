#include <stdio.h>

// Programs print after an EOF is encountered, and they exit

whileloopimpl() {
	long nc;
	nc = 0;

	while (getchar() != EOF)
		++nc;

	printf("%1d\n", nc);
}

forloopimpl() {
	long nc;
	for (nc = 0; getchar() != EOF; ++nc) {
		;
	}
	printf("%ld\n", nc);
}