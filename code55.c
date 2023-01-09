/**
 * C program to calculate profit or loss
 */

#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
   
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
     
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
       
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        
        printf("No Profit No Loss.");
    }

    return 0;
}