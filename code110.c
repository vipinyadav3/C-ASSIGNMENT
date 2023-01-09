/**
 * C program to convert Octal number system to Binary number system
 */

#include <stdio.h>

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary, place;
    int rem;
    
  
    printf("Enter any Octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;

    binary = 0;
    place  = 1;
    
  
    while(tempOctal > 0)
    {
        
        rem = tempOctal % 10;

      
        binary = (OCTALVALUES[rem] * place) + binary;

       
        tempOctal /= 10;

       
        place *= 1000;
    }

    printf("Octal number = %lld\n", octal);
    printf("Binary number = %lld", binary);

    return 0;
}