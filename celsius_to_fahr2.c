#include <stdio.h> 

/* This program prints the conversion from celsius to fareheith 
    with the formula fahr = 9/5 * (C + 32). This version will 
    use a function to do the calculation.*/

float cels_conv(float c); 

int main() 
{
    int lower, upper, step, count; 
    float fahr, celsius; 

    lower = -17; 
    upper = 148; 
    step = 20;  

    celsius = lower; 
    while (celsius <= 300) {
        printf("%6.0f %6.0f\n", celsius, cels_conv(celsius)); 
        celsius = celsius + step; 
    }

    return 0; 
}

float cels_conv(float cel)
{ 
    return (9.0/5.0) * (cel + 32); ; 
}