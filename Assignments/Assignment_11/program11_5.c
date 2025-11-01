///////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description :   Displays all numbers in a given range in reverse order
// Input :         int, int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayRev(int iStart , int iEnd)
{ 
    int iCnt = 0;

    // Input validation (Input : 90 18 Output : Invalid range)
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
 
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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
    
    RangeDisplayRev(iValue1, iValue2);
    
    return 0;
}

