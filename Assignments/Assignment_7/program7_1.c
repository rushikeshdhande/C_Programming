///////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description :   Prints $ * pattern for given number of times
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          27/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("$ * \t"); // \t for a one tab space
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);
    
    Pattern(iValue);

    return 0;
}
