#include <stdio.h> 
#define MAX_LENGTH 80
#define MAX_SPACE 1000

int getaline(char line[], int maxspace, int maxlength); 
void bigotline(char worthyline[]); 	/* intolerant to lines less than 80 */  

/* This program will print all input lines longer than 80 characters */ 
main()
{
	int c, i, worthiness; 

	char line[MAX_SPACE];  

	while ((worthiness = getaline(line, MAX_SPACE, MAX_LENGTH)) > 0)
	{
		if (worthiness >= MAX_LENGTH)
		{
			bigotline(line); 
		}
	}
	return 0; 
}

/* read in input and determine if bigger than 80-- ifso facto then return it */ 
/* the return from this should be used to copy over the contents if they are */
/* than 80 */ 
int getaline(char line[], int space_lim, int len_lim)
{
	int i, c; 

	for (i = 0; i<space_lim && (c=getchar())!=EOF && c != '\n'; ++i)
	{
		line[i] = c; 
	}
	if (c == '\n')
	{
		line[i] = c;
		++i; 
	}
	else 
	{
		printf("This line, or lack thereof, is not worthy.\n");
	}
	line[i] = '\0'; 

	return i; 
}

void bigotline(char worthyline[])
{
	int i; 

	i = 0; 
	printf("Printing line greater than 80 now... \n"); 
	printf("%s", worthyline);
}

