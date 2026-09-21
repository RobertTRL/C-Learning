/*
- The I/O model is supported by the standard library
- Text is dealt with as streams of characters
- A text stream is a sequence of chars divided into lines, 
  each line consisting of zero or more chars followed by a newline character (\n)
- getchar and putchar are the simplest functions for reading and writing one char at a time respectively
- getchar reads the next input char from a text stream and returns that as its value
- putchar prints a char each time it is called
*/

#include <stdio.h>

int filecopyingexample() {
	int c; 

		/* note that int data type is used here, 
		instead of char.We can't use char since 
		c must be big enough to hold EOF in 
		addition to any possible char */

	while ((c = getchar()) != EOF) { // EOF means End of File
		putchar(c);

	}

	return 0;
}