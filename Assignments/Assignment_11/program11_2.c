///////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Description :   displays all even numbers in between a given range
// Input :         int, int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
     
    int iCnt = 0;

    // input validation
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // loop from start to end
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        // check if the number is even
        if((iCnt % 2) == 0)
        {
            printf("%d ", iCnt);
        }
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
    
    RangeDisplayEven(iValue1, iValue2);
    
    return 0;
}

