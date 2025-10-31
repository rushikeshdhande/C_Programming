///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   It prints * on screen for the given number of times
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Updater is iNo
    while( iCnt < iNo )
    {
        printf(" * ");
        iCnt++;
    }
    printf("\n");  
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d" ,&iValue);
    
    Display(iValue);
    
    return 0;
}

