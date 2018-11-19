#include <stdio.h>


/* This program will demonstrate a histogram 
	of character frequencies. */ 

int c, i, nlcount, bscount, tcount, acount, ncount, other; 

nword = 0; 

main()
{
	printf("--------------------------------------------------------\n");
	printf("CHARACTER COUNTS HISTOGRAM\n"); 
	printf("--------------------------------------------------------\n\n");

	while ((c = getchar()) != EOF)
	{
		if (c == '\n') 
		{
			++nlcount; 
		}
		else if (c == ' ')
		{
			++bscount;
		}
		else if (c == '\t')
		{
			++tcount; 
		}
		else if (c == 'a')
		{
			++acount;
		}
		else if (c >= '0' && c <= '9')
		{
			++ncount; 
		}
		else
		{
			++other; 
		}
	}

	printf("\nnew lines:\t");
	for (i = 0; i < nlcount; ++i)
	{
		printf("#");
	} 
	printf("\n");

	printf("spaces:\t\t"); 
	for (i = 0; i < bscount; ++i)
	{
		printf("#");
	}
	printf("\n");

	printf("tabs:\t\t"); 
	for (i = 0; i < tcount; ++i)
	{
		printf("#");
	}
	printf("\n");

	printf("letter a:\t"); 
	for (i = 0; i < acount; ++i)
	{
		printf("#");
	}
	printf("\n");

	printf("numbers:\t"); 
	for (i = 0; i < ncount; ++i)
	{
		printf("#");
	}
	printf("\n");

	printf("other:\t\t"); 
	for (i = 0; i < other; ++i)
	{
		printf("#");
	}
	printf("\n");
}