///////////////////////////////////////////////////////////
//
// Function Name : displayFactor
// Description :   It prints the even factors of a number
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          23/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void displayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= (iNo / 2); i++)
    {
        // check if 'i' is a factor AND 'i' is even
        if (((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}