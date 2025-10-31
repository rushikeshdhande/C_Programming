///////////////////////////////////////////////////////////
//
// Function Name : ChkEqual
// Description :   Checks if two numbers are equal
// Input :         int, int
// Output :        bool
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h> // use bool

bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}
