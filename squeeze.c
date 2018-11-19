/* This program will "squeeze" any c's from a string of characters
 * (array of characters). 
 */ 

#include <stdio.h> 

char s[100] =
{
	'a',
	'b',
	'c',
	'd',
	'c',
	'c',
	'c',
	'c'
}; 

int c, i; 

void squeeze(char s[], int c)
{
	int i, j; 

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i]; 
	s[j] = '\0';
}

int main()
{
	c = 'c';	// remove any and all c's

	printf("String before: %s\n", s); 

	squeeze(s, c); 

	printf("String after: %s\n", s); 

	return 0; 
} 