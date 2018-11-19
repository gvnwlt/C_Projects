#include <stdio.h> 

/* 
	This program will copy its input to the output and then carry out 
	an operation of replace strings with one or more blanks with a 
	single blank line 
*/ 

int b, c;

b = 0; 

main() 
{

	while ((c = getchar()) != EOF) 
	{
		if (c == "\n") 
		{
			printf("%d", c); 
			++b; 
		}
		if (b >= 1) 
		{
			b =0; 
			printf("\n");
		}
	}// end while

}// end main

