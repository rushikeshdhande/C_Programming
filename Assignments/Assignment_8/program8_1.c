///////////////////////////////////////////////////////////
//
// Function Name : Number
// Description :   Prints small/medium/large based on number
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          28/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small\n");
    }
    else if(iNo >= 50 && iNo < 100) // handles 50 to 99
    {
        printf("Medium\n");
    }
    else // handles 100 and above
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    Number(iValue);
    
    return 0;
}

