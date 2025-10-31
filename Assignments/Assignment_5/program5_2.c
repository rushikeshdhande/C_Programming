///////////////////////////////////////////////////////////
//
// Function Name : FindMax
// Description :   Finds the maximum of two numbers
// Input :         int, int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          25/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int FindMax(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    result = FindMax(num1, num2);
    
    printf("Maximum is: %d\n", result);
    
    return 0;
}

