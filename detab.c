#include <stdio.h> 
#include <unistd.h> 
#define TAB_STOPS 20	    /* this may change later */ 
#define MAX_CHAR 250		/* max allowed characters */ 
//#define TRUE 1
//#define FALSE 0


/* this program will replace default tab stops with a specified amount of spaces; 
	this may or may not be designated by the user at runtime */ 

/* vars: remember these can be accessed by any function as long as specified before it */
int i;

char string[MAX_CHAR]; 
char new_string[MAX_CHAR];  

/* functions: */ 
int replace_stops(); 

main()
{
	while (replace_stops() > 0)
	{
		printf("%s\n", new_string); 
	}
	return 0; 
}

/* replace_stops: will replace the stop with spaces */ 
int replace_stops() 
{
	int i, c, j, k, step; 
	//int tab_swap = FALSE;  

	for (i = 0; i < MAX_CHAR && (c=getchar())!=EOF && (c!='\n'); ++i)	
	{
	
		string[i] = c; 
	
	}
	if (c == '\n')
	{
		string[i] = c; 
		++i; 
	} 

	string[i] = '\0'; 

	j = 0; 
	k = 0; 
	while (string[j] != '\0')
	{
		if (string[j] == '\t')
		{
			step = 0; 
			while (step < TAB_STOPS+1)
			{
				new_string[j + k + step] = ' ';
				++step; 
			}
			k = k + TAB_STOPS; 
		}
		new_string[j + k] = string[j]; 
		++j; 
	}

	return i; 
}