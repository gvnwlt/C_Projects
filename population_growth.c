#include <stdio.h>
#include <stdlib.h>
#include <stdio.h> 

int main() 
{
    int n = 0; 
    int y;
    int init = 1000; 
    double pct = 0.02; 
    int add = 50; 
    
    y = (int)(init + (init * pct)) + add; 

    printf("%d", y); 

    return 0; 
}