/**
 * C program to find highest order set bit in a number
 */

#include <stdio.h>
#define INT_SIZE sizeof(int)

int main()
{
    int num, order = -1, i;

    
    printf("Enter any number: ");
    scanf("%d", &num);

   
    for(i=0; i<INT_SIZE; i++)
    {
               if((num>>i) & 1)
            order = i;
    }

    if (order != -1)
        printf("Highest order set bit in %d is %d", num, order);
    else 
        printf("0 has no set bits.");

    return 0;
}