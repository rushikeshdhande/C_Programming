///////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description :   Prints first 5 multiples of N
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          27/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    // handle negative input
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // handle zero input
    if (iNo == 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
