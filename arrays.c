#include <stdio.h> 

/* count digits, white space, others */ 

main()
{
	int c, i, nwhite, nother; 
	int ndigit[10]; 

	nwhite = nother = 0; 
	for (i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			/* 
				Below is an example of doing character math whereby the character values
				for integers in this case are actually equivalent to regular integers, 
				thus resulting in an integer value as the result. This little hack essentially
				makes it so the character values for numbers are converted to an integer so that
				an incrementation can be made at an array index.
			*/
			++ndigit[c - '0']; 
		}
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			++nwhite; 
		}
		else 
		{
			++nother; 
		}
	}

	printf("digits = "); 
	for (i = 0; i < 10; ++i)
	{
		printf(" %d", ndigit[i]); 
	}
	printf(", white space = %d, other = %d\n", nwhite, nother); 
}