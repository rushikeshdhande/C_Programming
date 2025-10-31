///////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description :   It prints * on screen for the given number of times
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}