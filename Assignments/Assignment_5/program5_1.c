///////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description :   Checks if a number is even or odd
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          25/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void CheckEvenOdd(int num)
{
    // logic bellow 
    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}
