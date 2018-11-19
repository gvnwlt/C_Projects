/* example of using a goto statement (rarely if every used) */ 
#include <stdio.h> 

int main() 
{
	int n, m, i, j;
	n = 10;
	m = 10;   

	char a[10] = {"acbbbcccde"};
	char b[10] = {"zaebedcygx"};

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				printf("Something at index %d...\n", j);
				goto found; 
			}
		}
	/* didn't find any common element */
	}

	found: 
		printf("Got one!\n"); 

	return 0; 
}