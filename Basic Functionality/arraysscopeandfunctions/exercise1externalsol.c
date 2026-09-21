#include <stdio.h>

// Prints a histogram of the lengths of the words that are input.
int exercise1externalsol(void) {

    int chara;
    int word_length = 0;
    int word_length_index[256]; // 256 chosen arbitrarily.
    int histo_length = 0;

    for (int i = 0; i < 256; ++i) {
        chara = getchar();
        if (chara == '\n' || chara == ' ' || chara == '\t') { // If inputted character is whitespace, store current word length and reset word length counter. 
            word_length_index[i] = word_length;
            word_length = 0;
        }

        else if (chara == EOF) { // EOF character to break out of the loop, print the histogram, and exit the program.
            histo_length = i;      // histo_length: so the histogram doesn't print garbage info if I input <256 words.
            break;
        }

        else {
            ++word_length; //For any other character, add one to the word length counter.
        }
    }

    // Go to value stored at word_length_index[j], and print '=' that many times; then, print ']', enter a new line, and repeat for next index value.
    for (int j = 0; j < histo_length; ++j) {
        for (int k = 0; k < word_length_index[j]; ++k) {
            putchar('=');
        }
        putchar(']');
        putchar('\n');
    }

    return 0;
}