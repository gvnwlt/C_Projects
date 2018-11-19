#include <stdio.h> 
#include <unistd.h> 
#include <math.h> 
#define MAX_CHAR 250
#define TAB_LIMIT 4 


/* variables */ 
int i, c, space_found; 
char string[MAX_CHAR]; 
char new_string[MAX_CHAR]; 

/* functions */ 
int sttab(); /* spaces to tabs */

/* this program will replace the strings of blanks with the proper number 
	of tabs; default tab stop is equivalent to 4 spaces; in addition to this
	if tab is exceeded plus a few spaces, just do tab then sum of spaces */ 	
main()
{
	while (sttab() > 0)
	{
		printf("%s", new_string); 
	}
	return 0; 
}

/* replace_stops: will replace the stop with spaces */ 
int sttab()  
{
	int i, c, j, k, step, start, end;  

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

	/* pat it down for space characters */ 
	j = 0; 
	start = 0;  
	while (string[j] != '\0')
	{
		if ((string[j] == ' ') && (string[j + 1] == ' '))
		{
			printf("consecutive spaces found\n");
			start = j; 
			space_found = 0; 
			while (string[j + space_found] == ' ')
			{
				++space_found; 
				printf("searching for space\n");
			}
			end = start + space_found; 

			if (space_found >= TAB_LIMIT)
			{
				printf("tab limit reached\n");
				/* copy string up to space; get character after last space; 
					copy from that character to the end into new string */ 
				step = 0; 
				while  (step < start)
				{
					printf("now copying first half\n");
					new_string[step] = string[step]; 
					++step; 
				} 
				// step = 0; 
				// while (step < (end - start))
				// {
				// 	printf("now adding spaces for tabs\n"); 
				// 	new_string[start + step] = '\t';
				// 	++step; 
				// }

				new_string[start] = '\t'; 
				printf("TAB-->");

				step = 0;
				while (string[start + step + 1] != '\0')
				{
					printf("now copying second half\n");
					new_string[start + step + 1] = string[start + step + 1]; 
					++step;  
				}
			}
			++j; 	
		}
		else
		{
			/* do nothing for */ 
			printf("no consecutive spaces found\n"); 
			++j; 
		}	
	}/* end while */ 

	return i; 
}
