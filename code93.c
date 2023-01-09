/**
 * C program to whether a number is prime number or not
 */

#include <stdio.h>

int main()
{
    int i, num, isPrime;

   
    isPrime = 1; 

    printf("Enter any number to check prime: ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
       
        if(num%i==0)
        {
    
            isPrime = 0;

           
            break;
        }
    }

  
    if(isPrime == 1 && num > 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is composite number", num);
    }

    return 0;
}