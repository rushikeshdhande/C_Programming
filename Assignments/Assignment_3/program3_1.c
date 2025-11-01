///////////////////////////////////////////////////////////
//
// Function Name : printEven
// Description :   It prints the first N even numbers
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          23/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;
    
    if(iNo <= 0)
    {
        return;
    }
    
    // Logic: loop N times, print (counter * 2)
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
    }
    printf("\n");  
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    PrintEven(iValue);
    
    return 0;
}

