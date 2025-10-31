///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   It prints the first number "second number" times
// Input :         int, int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // handle negative frequency (21 -3 -> 21 21 21)
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    //Updater is iFrequency
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
    printf("\n");  
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d" ,&iValue);
    
    printf("Enter frequency: ");
    scanf("%d" ,&iCount);
    
    Display(iValue, iCount);
    
    return 0;
}