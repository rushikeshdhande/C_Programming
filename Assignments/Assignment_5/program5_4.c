///////////////////////////////////////////////////////////
//
// Function Name : CheckNumberType
// Description :   Checks if a number is positive, negative, or zero
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("%d is Positive.\n", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative.\n", num);
    }
    else
    {
        printf("%d is Zero.\n", num);
    }
}

int main()
{
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    CheckNumberType(number);
    
    return 0;
}