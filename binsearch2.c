/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */ 
#include <stdio.h> 

int x, n;

int v[100] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,};  

int binsearch(int x, int v[], int n)
{
	int low, high, mid, i; 

	low = 0; 
	high = n -1; 
	mid = (low+high) / 2;
	while (low <= high && x != v[mid]) {
		if (x < v[mid]) {
			high = mid - 1; 
		}
		else {
			low = mid + 1; 
		}
		mid = (low+high) / 2;
		i++; 
	}

	printf("Number of iterations: %d\n", i);
	if (x == v[mid]) {
		return mid; 
	} 
	else {
		return -1; /* no match */ 
	}
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