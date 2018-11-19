/* this program will convert hexadecimal to integer */ 

/* unfinished */ 

#include <stdio.h> 

int c, i, s, a, b, r, t; 

char string[250] = "232128"; /* hash bang in hex */
//int ch[250] = 23;

void read_char();		  /* read in string characters */ 
int strc(char string[]);  /* string length */ 
int byte_reader(char string[]); /* reads a string for bytes and converts to integer or decimal */ 

main()
{ 
	
	for (i = 0; i < strc(string); i = i + 2)
	{
		/* checking the left hex nibble */ 
		printf("starting at: %d\n", i); 
		if (string[i] >= '0' && string[i] <= '9')
		{
			printf("integer character given\n");
			a = 10 * (string[i] - '0'); 
		}
		else if (string[i]  >= 'A' && string[i] <= 'Z')
		{
			printf("upper case character given\n"); 

		}
		else if (string[i] >= 'a' && string[i] <= 'z')
		{
			printf("lower case character given\n"); 
		}

		/* checking the right hex nibble */ 
		if (string[i+1] >= '0' && string[i+1] <= '9')
		{
			printf("integer character given\n");
			b = string[i+1] -  '0'; 
		}
		else if (string[i+1]  >= 'A' && string[i+1] <= 'Z')
		{
			printf("upper case character given\n"); 
		}
		else if (string[i+1] >= 'a' && string[i+1] <= 'z')
		{
			printf("lower case character given\n"); 
		}

		/* sum it up */ 
		r = 12 + a + b; 

		printf("%c\n", r); 
	}



	//printf("The hexadecimal is: %s\n", string);
	//printf("This translates to: %d\n", 0x23); 
}

/* stdin character reader */ 
void read_char()
{
	for (i = 0; i < 10; ++i)
	{	
		while ((c = getchar()) != EOF && c != '\n')
		{
			if (c >= '0' && c <= '9')
			{
				printf("number character given\n"); 
			}
			else if (c >= 'a' && c <= 'z')
			{
				printf("lower case character given\n"); 
			}
			else if (c >= 'A' && c <= 'Z')
			{
				printf("upper case character given\n"); 
			}
		}

		if (c == EOF)
		{
			break; 
		}
	}
}

/* report string length */ 
int strc(char string[])
{
	int i; 

	i = 0; 
	while (string[i] != '\0')
	{
		++i; 
	}

	return i;  
}

/* return decimal integer value for hex bytes in a string */ 
int byte_reader(char string[])
{
	r = 0; 
	return r; 
}