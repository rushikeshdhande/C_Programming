///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   It prints * on screen for the given number of times
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    // Updater is 0
    while (iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
