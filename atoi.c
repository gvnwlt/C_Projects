#include <stdio.h> 

/* this program is a wheel reinvented; this is the atoi function 
	that converts character strings to integers */ 

int c, i; 

char string[1];	// only converting one character to an integer  

int atoi(char s[]);

main()
{
	i = 0; 

	printf("Please enter a character integer: ");
	while ((c = getchar()) != EOF && c != '\n') 
		string[i] = c;

	printf("Conversion to integer result: %d%c", atoi(string), 0x0a); 

	return 0; 
}

int atoi(char s[])
{
	int i, n; 


	n = 0; 
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0'); 

	return n; 
}