///////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description :   Check whether a number contains zero
// Input :         int
// Output :        BOOL (int)
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    // Handle 0 input explicitly
    if(iNo == 0)
    {
        return TRUE;
    }

    // Handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // loop through digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE; // Found zero
        }
        iNo = iNo / 10;
    }

    return FALSE; // No zero found
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE; 
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}

// Time Complexity: O(N)  

