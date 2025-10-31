///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   It prints "Hello" if number is less than 10, otherwise prints "Demo"
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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