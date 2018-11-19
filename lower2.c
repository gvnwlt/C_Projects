#include <stdio.h> 

int i, c, s; 

 

int lower(int c); 

int main()
{
	int i = 0; 
	while ((c = getchar()) != EOF && c != '\n')
		s = c;

	printf("Before: %d\n", s);
	printf("After: %d\n", lower(s)); 

	return 0; 
}

int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c; /* using ternary operator */ 
}