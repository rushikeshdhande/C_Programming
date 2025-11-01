///////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description :   converts USD to INR (1$ = 70 Rs)
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;
    
    //1 USD = 70 INR
    iAns = iNo * 70;
    
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);
    
    printf("Value in INR is %d\n",iRet);
    
    return 0;
}

