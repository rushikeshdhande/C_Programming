///////////////////////////////////////////////////////////
//
// Function Name : Table
// Description :   Displays multiplication table of a number
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          28/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    // Handle negative numbers as per example
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to print table from 1 to 10
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n");  
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    Table(iValue);
    
    return 0;
}

