///////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description :   Displays multiplication table in reverse
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to print table from 10 down to 1
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n"); // Add a newline for clean output
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    TableRev(iValue);
    
    return 0;
}

