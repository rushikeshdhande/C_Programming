///////////////////////////////////////////////////////////
//
// Function Name : print_odd_numbers
// Description :   Prints all odd numbers up to N
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void print_odd_numbers(int limit)
{
    // logic to print odd numbers from 1 up to limit
    int i = 0;

    if(limit < 1)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = 1; i <= limit; i++)
    {
        // Check if the number is odd
        if((i % 2) != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");  
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    
    print_odd_numbers(limit);
    
    return 0;
}

// Time Complexity: O(N)

