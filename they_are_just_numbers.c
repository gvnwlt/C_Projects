#include <stdio.h> 

/* This program is proof that all data types are just numbers--even characters
	--because characters are just 1 byte integers, whereas integers are 4 bytes. */ 




main()
{

	int a, b;
	a = 71; 
	b = 'b';

	printf("%d %d\n", a, b);  

	char c, d; 
	c = 'a'; 
	d = 'd'; 

	printf("%c %d%c%c%c", c, a, d, 0x0a, 0x0a);



	return 0; 
}