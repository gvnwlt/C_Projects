#include <stdio.h> 

/* this program will count the number of tabs, blanks, and newlines in given input(s) */ 

int t, b, nl, c; 

int t = 0; 
int b = 0; 
int nl = 0; 

main()
{
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			++t; 
		}
		if (c == ' ') {
			++b;
		}
		if (c == '\n') {
			++nl; 
		}
	}

	printf("\ntabs: %d\t blanks: %d\t newlines: %d\n", t, b, nl); 
}