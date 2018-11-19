#include <stdio.h> 
#define LIMIT 250 
#define TRUE	1
#define FALSE	0 

main()
{
	int i, c, eof;

	char string[100];  


	i = 0; 
	while (i < LIMIT-1)
	{
		c = getchar(); 
		if (c == '\n')
		{
			break; 
		}
		else if (c == EOF)
		{
			eof = TRUE; 
			break; 
		}
		string[i] = c; 
		++i; 
	}
	if (eof)
	{
		printf("\n%s\n", string);
	}
	else 
	{
		printf("%s\n", string); 
	}
}
	