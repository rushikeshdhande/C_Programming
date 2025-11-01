///////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Description :   calculates factorial of even numbers
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    // handle negative numbers as per example
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to multiply only even numbers
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) == 0)
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
    
    iRet = EvenFactorial(iValue);
    
    printf("Even Factorial of number is %d\n",iRet);
    
    return 0;
}

