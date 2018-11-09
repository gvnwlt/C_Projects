#include <stdio.h>
#include <stdlib.h> 
#define MAX 30 
/*
 * FILENAME : 	main.c		DESIGN REF: ???
 * 
 * DESCRIPTION:
 * 		Basic c source file to test and demonstrate different aspects of c programming.
 * 
 * PUBLIC FUNCTIONS: 
 * 
 * NOTES :
 * 		Use this as a template. 
 * 
 * AUTHOR: 	Gavin Walters 		START DATE:  1 Jun 2018
 * 
 * CHANGES: 
 * 
 * REF NO 	VERSION DATE 	WHO		DETAIL
 * 							GW		
 * 
 */

/*
|--------------------------------------------------------------------------------------
| Source File Test --> section breakdown with more details if necessary
|--------------------------------------------------------------------------------------
|
| This is just a way to format code in the future so that it can be broken down easier.  
|
*/ 

/* ex: heading comment to break down blocks*/ 

// FIXME: 
// xxx: 
// TODO:

typedef struct{
	int roll; 
	char name[20]; 
	double gp; 
} Student;

void inputStudent(Student *sp) {
	printf("Enter roll: ");
	scanf("%d", &sp->roll); 
	printf("Enter name: "); 
	scanf("%[^\n]", sp->name); 
	printf("Enter grade point: "); 
	scanf("%lf", &sp->gp); 
}

void printStudent(Student sp) {
	printf("Roll: %4d, Name: %-20s %10.2lf\n", sp.roll, sp.name, sp.gp); 
}

int main(int argc, char *argv[]) 
{
	Student s; 

	inputStudent(&s);
	printStudent(s); 

	return 0; 
}

