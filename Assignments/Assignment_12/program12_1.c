///////////////////////////////////////////////////////////
//
// Function Name : printFactors
// Description :   Prints all factors of a given number
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void printFactors(int number)
{
    // Logic to print all positive factors of 'number' in ascending o 
    int i = 0;

    // handle negative input by making it positive
    if(number < 0)
    {
        number = -number;
    }
    
    if(number == 0)
    {
        printf("0 has no positive factors.\n");
        return;
    }

    // Loop from 1 up to the number
    for(i = 1; i <= number; i++)
    {
        // if 'i' divides 'number' perfectly, it's a factor
        if((number % i) == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");  
}

int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    
    printFactors(number);
    
    return 0;
}

// Time Complexity: O(N)