#include <stdio.h> 

int i, c, s; 

 

int lower(int c); 

main()
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
	if ( c >= 'A' && c <= 'Z')
		return c + 'a' - 'A'; 
	else 
		return c; 
}