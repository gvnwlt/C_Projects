/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */ 
#include <stdio.h> 

int x, n;

int v[100] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,};  

int binsearch(int x, int v[], int n)
{
	int low, high, mid, i; 

	low = 0; 
	high = n -1; 
	while (low <= high) {
		mid = (low+high) / 2; 
		if (x < v[mid]) {
			high = mid - 1; 
		}
		else if (x > v[mid]) {
			low = mid + 1; 
		}
		else {
			printf("Number of iterations: %d\n", i); 
			return mid; 
		}
		i++; 
	}

	printf("Number of iterations: %d\n", i);

	return -1; /* no match */ 
}

int arrlen(int array[])
{
	int i; 

	for(i = 0; array[i] != '\0'; ++i) {

	}

	printf("Counted: %d\n", i); 

	return i; 
}

/* test */ 
int main() 
{
	x = 5; /* looking for 5 */  

	n = arrlen(v); /* size of the string we are searching in */ 

	printf("Index matched was: %d\n", binsearch(x, v, n)); 
}