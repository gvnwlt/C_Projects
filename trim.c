/* trims the trailing blanks, tabs, and newlines */ 
#include <stdio.h> 
#include <string.h> 



int trim(char s[])
{
	int n; 
	int i; 

	for (n = strlen(s)-1; n >= 0; n--) {
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
			break;
		}
	}
	s[n+1] = '\0'; 
	return n; 
}

int main()
{
	int n; 
	char s[100] = {"abscdegsdfs           "}; 

	printf("Before: %s<--\n", s); 

	n = trim(s); 

	printf("After:  %s<--\nHalting at index %d.\n", s, n); 

	return 0; 
}