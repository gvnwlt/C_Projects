#include <stdio.h> 

/* strlenght: return a length of a s --this is a replica of the real strlen*/ 

/* testing in main */ 
main() 
{
	int c, i, report; 

	char string[10];  

	int strlength(char s[]); 

	while ((c = getchar()) != EOF && c != '\n')
	{
		string[i] = c;
		++i;  
	}
	++i; 
	string[i] = '\0';
	report = strlength(string); 
	printf("%d\n", report); 

	return 0; 
}







int strlength(char s[])
{
	int i; 

	i = 0; 
	while (s[i] != '\0')
	{
		++i; 
	}

	return i; 
}