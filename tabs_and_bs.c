#include <stdio.h> 

/* 
	This program will replace every input recieved for 
	backspaces and tabs with actual \b's and \t's.
*/ 

int c, b, t; 

b = 0; 
t = 0; 

main() 
{
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			printf("\\b\n"); 
		}
		if (c == '\t')
		{
			printf("\\t\n"); 
		}
		if ((c != ' ') && (c != '\t'))
		{
			putchar(c); 
		}
	}
}
