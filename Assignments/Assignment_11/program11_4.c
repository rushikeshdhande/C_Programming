///////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description :   Returns addition of all even numbers in a given range
// Input :         int, int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    // logic
    int iCnt = 0;
    int iSum = 0;

    // Input : 90 18 Output : Invalid range 
    // Input : -10 2 Output : Invalid range 
    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid range\n");
        return 0;  
    }
 
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        // Add to sum only if the number is even
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter starting point");
    scanf("%d",&iValue1);
    
    printf("Enter ending point");
    scanf("%d",&iValue2);
    
    iRet = RangeSumEven(iValue1, iValue2);
    
    // only print the sum if the range was valid (iRet will be 0 on invalid)
    if(iRet != 0)
    {
        printf("Addition is %d\n",iRet);
    }
    
    return 0;
}

