/**
 * C program to find LCM of any two numbers
 */

#include <stdio.h>

int main()
{
    int i, num1, num2, max, lcm=1;

   
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    i = max;
    
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
           
            lcm = i;

           
            break;
        }

        i += max;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}