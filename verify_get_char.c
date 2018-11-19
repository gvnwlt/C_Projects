#include <stdio.h> 

/* 
	-should return a value for the getchar() function when evaluated agains != EOF; should expect to see a 1 for not EOF? 
	-also will print the actual value of EOF alone
*/ 

int main() 
{
	int gceof = (getchar() != EOF); 
	printf("Value of comparision: %d \n", gceof); 
	printf("Value of EOF: %d \n", EOF); 

	return 0; 
}

