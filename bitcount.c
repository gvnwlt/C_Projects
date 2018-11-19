/* bitcount: count 1 bits in x */ 
#include <stdio.h> 

int bitcount(unsigned x)
{
	int b, test; 

	for (b = 0; x != 0; x >>= 1)
	{
		if (x & 01)
		{
			b++; 
		}

		return b; 
	}
}

int main() 
{
	int c; 
	c = getchar(); 

	printf("The bit count for x, which is the value \"%d\""
		" is %d\n", c, bitcount(c)); 

	return 0; 
}