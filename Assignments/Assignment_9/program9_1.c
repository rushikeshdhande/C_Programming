///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   Displays a pattern of * and #
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // handle negative numbers as per example
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // logic to print *
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    // logic to print #
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
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