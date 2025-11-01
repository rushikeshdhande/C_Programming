///////////////////////////////////////////////////////////
//
// Function Name : OddFactorial
// Description :   calculates factorial of odd numbers
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    // handle negative numbers as per example
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to multiply only odd numbers
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) != 0) // check for odd
        {
            iAns = iAns * iCnt;
        }
    }
    
    return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);
    
    printf("Odd Factorial of number is %d\n",iRet);
    
    return 0;
}

