///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   Prints a number line from -iNo to iNo
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          27/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // handle negative input
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
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
