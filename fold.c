#include <stdio.h> 
#define MAX_CHAR 250
#define CHAR_WIDTH 10 

/* variables */ 
int i, j, x, c;   

char string[MAX_CHAR]; 

main() 
{
	/* every '\n' received triggers the printf buffer to display to stdout */ 
	while ((c=getchar()) != EOF)
	{
		if (i < CHAR_WIDTH)
		{
			putchar(c); 
			i++; 
		}
		else
		{
			putchar('\n');
			putchar(c);
			i=0; 
		} 
	} 
	
	return 0; 
}
