/**
 * C program to convert binary to hexadecimal number system
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long binary, tempBinary;
    char hex[20];
    int index, i, digit;
    
   
    printf("Enter binary number: ");
    scanf("%lld", &binary);
    
   
    tempBinary = binary;
    index = 0;
    
    
    while(tempBinary!=0)
    {
      
        digit = tempBinary % 10000;

        for(i=0; i<16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i<10)
                {
                   
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    
                    hex[index] = (char)((i-10) + 65);
                }

                index++;
                break;
            }
        }

       
        tempBinary /= 10000;
    }
    hex[index] = '\0';

  
    strrev(hex);

    printf("Binary number = %lld\n", binary);
    printf("Hexadecimal number = %s", hex);

    return 0;
}