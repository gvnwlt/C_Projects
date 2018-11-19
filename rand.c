/* this program demonstrates how the rand function in the c standard library
	works */ 

#include <stdio.h> 

int c, snum; 


unsigned long int next = 1; 

int rand(void);
void srand(unsigned int seed); 

main()
{
	snum = -1; /* seed number given */ 

	while ((c = getchar()) != EOF && c != '\n')
		snum = c;

	if (snum <= -1)
	{
		printf("Invalid value entered.\n"); 
	}
	else
	{
		srand(snum); 
		printf("%d\n", rand()); 
	}
		

	return 0; 
}

int rand(void)
{
	next = next * 1103515245 + 12345; 
	return (unsigned int)(next/65536) % 32768; 
}

/* essentially just a setter */ 
void srand(unsigned int seed)
{
	next = seed; 
}