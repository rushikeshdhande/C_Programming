///////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description :   displays all numbers in between a given range
// Input :         int, int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
  
    int iCnt = 0;

    // input validation as per example (Input : 90 18 Output : Invalid range)
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point");
    scanf("%d",&iValue1);
    
    printf("Enter ending point");
    scanf("%d",&iValue2);
    
    RangeDisplay(iValue1, iValue2);
    
    return 0;
}

