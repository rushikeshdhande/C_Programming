///////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description :   Calculates diff between even and odd factorial
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // logic to calculate both factorials in one loop
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if ((iCnt % 2) == 0) // Even
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else // Odd
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
