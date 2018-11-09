#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	if (argc < 1) {
		printf("usage: int_divide <int_1> <int_2>"); 
		return 0;

	}

	int q; 
	int int_1 = atoi(argv[1]); 
	int int_2 = atoi(argv[2]); 

	q = int_1 / int_2; 

	printf("%d / %d = %d\n", int_1, int_2, q); 

	return 0;  
}