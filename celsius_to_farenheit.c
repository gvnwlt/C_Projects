#include <stdio.h> 

/* This program prints the conversion from celsius to fareheith 
    with the formula fahr = 9/5 * (C + 32) */ 

int main() 
{
    int lower, upper, step, count; 
    float fahr, celsius; 

    lower = -17; 
    upper = 148; 
    step = 20;  

    celsius = lower; 
    while (celsius <= 300) {
        fahr = (9.0/5.0) * (celsius + 32);   
        printf("%6.0f %6.0f\n", celsius, fahr); 
        celsius = celsius + step; 
    }

    return 0; 
}

