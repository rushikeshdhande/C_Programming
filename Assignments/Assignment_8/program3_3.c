///////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Description :   Calculates factorial of a number
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1; // Initialize factorial to 1
 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    // Loop from iNo down to 1
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d\n",iRet);  
    
    return 0;
}

