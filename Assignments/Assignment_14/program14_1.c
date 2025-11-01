///////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description :   Display digits of a number in reverse order
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

// Time Complexity: O(N)