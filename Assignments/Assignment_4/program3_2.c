///////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description :   It displays factors in decreasing order
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = (iNo / 2); i >= 1; i--)
    {
        if ((iNo % i) == 0)
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

    FactRev(iValue);

    return 0;
}
