///////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description :   It returns summation of all non-factors
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;
 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop from 1 up to (but not including) the number
    for(i = 1; i < iNo; i++)
    {
        // Check if 'i' is NOT a factor
        if((iNo % i) != 0)
        {
            // Add it to the sum
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);
    
    iRet = SumNonFact(iValue);
    
    printf("%d",iRet);
    
    return 0;
}
