#include <stdio.h> 
#define BASE 2 

/* vars */ 
char ch; 
int c; 

/* functions */ 
int power(int exp); 
void dt_check(char type, int exp); /* need to build this one still... */ 

/* this program will use computation to check data sizes 
	of various types of data like int, char, etc. */ 
int main() 
{
	/* testing character data types */ 
	// printf("Enter an exponential value(power value): ");
	// c = getchar(); 
	// printf("%d\n", c); 

	ch = power(5);

	if ((ch < 128) && (ch > -128) && (ch != 0))
	{
		printf("Char value good: %d\n", ch); 
	}
	else
	{
		printf("Char value bad: %d\n", ch); 
	}
	

	return 0; 
}

int power(int e)
{
	int i, b, p;

	b = BASE; 
	p = b; 

	for (i = 1; i < e; ++i)
	{
		p = p * b; 
	}

	return p; 
}
