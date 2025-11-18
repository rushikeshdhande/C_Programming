///////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description :   It displays the multiplication of factors
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          24/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    // Handle negative numbers by making them positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 0;
    }

    for (i = 1; i <= (iNo / 2); i++)
    {
        if ((iNo % i) == 0)
        {
            iMult = iMult * i;
        }
    }

    // return the total multiplication
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}
