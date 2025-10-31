///////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description :   Prints all odd numbers up to N
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          27/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0) // Check if the number is odd
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
