///////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   Prints single digit number into word
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    // handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // check if it's not a single digit
    if(iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    // logic using switch case to print the word
    switch(iNo)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}

