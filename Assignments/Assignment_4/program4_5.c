///////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description :   It returns difference between sum of factors and non-factors
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    // handle negative numbers
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i < iNo; i++)
    {
        // check if 'i' is a factor
        if ((iNo % i) == 0)
        {
            iFactSum = iFactSum + i;
        }
        else // 'i' is NOT a factor
        {
            iNonFactSum = iNonFactSum + i;
        }
    }

    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}
