///////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Description :   It prints the even factors of a number
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          23/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
     
    for(i = 1; i <= (iNo / 2) ;i++)
    {
        // condition 1: Check if 'i' is a factor
        // condition 2: Check if 'i' is even
        if(((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d ", i);
        }
    }
    printf("\n"); // Added for cleaner output
}

int main() 
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayEvenFactor(iValue);
    
    return 0;
}
