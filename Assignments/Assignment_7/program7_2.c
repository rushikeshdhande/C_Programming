///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   Prints numbers from 1 to iNo
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // handle negative or zero input
    if (iNo <= 0)
    {
        printf("Please enter a positive number.\n");
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
