/* 
 *  allocating and deallocating memory using pointer notation
 *
 *  arrays are essentially pointers to a contious memory section 
 *  on the heap.
 */


int **allocate(int nRows, int nCols) {
	int **p; 

	p = (int **)malloc(nRows * sizeof(int *));
	if (p == NULL)
		exit(0); 
	int i;  
	for (i = 0; i < nRows; i++) {
		*(p+i) = (int *)malloc(nCols * sizeof(int)); 
	}
	return p; 
}

 void deallocate(int **p, int nRows, int nCols) {
 	int i, j; 
	for (i = 0; i < nRows; i++) {
		free(*(p+i)); 
	}
	free(p);
	printf("memory deallocated\n");
 }

void inputValues(int **p, int nRows, int nCols) {
	int i, j; 
	for (i = 0; i < nRows; i++) {
		for (j = 0; j < nCols; j++) {
			printf("Enter value for %d row %d col: ", i, j); 
			scanf("%d", (*(p+i)+j)); 
		}
	}
}

void printValues(int **p, int nRows, int nCols) {
	int i, j; 
	for (i = 0; i < nRows; i++) {
		for (j = 0; j < nCols; j++) {
			printf("%6d", *(*(p+i)+j));
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	int **p; 

	int nRows, nCols; 
	printf("Enter Number of Rows: "); 
	scanf("%d", &nRows); 
	printf("Enter Number of Cols: "); 
	scanf("%d", &nCols); 
	p = allocate(nRows, nCols); 
	inputValues(p, nRows, nCols); 
	printValues(p, nRows, nCols); 
	deallocate(p, nRows, nCols); 

	return 0; 
}

