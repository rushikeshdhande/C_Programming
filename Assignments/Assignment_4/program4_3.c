///////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description :   It displays all non-factors
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          24/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    // handle negative numbers
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i < iNo; i++)
    {
        // check if 'i' is NOT a factor
        if ((iNo % i) != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
