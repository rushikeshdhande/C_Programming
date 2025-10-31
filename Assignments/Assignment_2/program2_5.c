///////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description :   It checks whether a number is even or odd
// Input :         int
// Output :        bool
// Author :        Rushikesh baban dhande
// Date :          22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h> // for bool type

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number: ");
    scanf("%d" ,&iValue);
    
    bRet = ChkEven(iValue);
    
    // display result
    if(bRet == true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    
    return 0;
}
