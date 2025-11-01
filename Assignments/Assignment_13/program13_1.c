///////////////////////////////////////////////////////////
//
// Function Name : print_numbers
// Description :   Prints all numbers from 1 to N
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void print_numbers(int limit)
{
    // logic to print numbers from 1 to limit
    int i = 0;

    if(limit < 1)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = 1; i <= limit; i++)
    {
        printf("%d ", i);
    }
    printf("\n");  
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    
    print_numbers(limit);
    
    return 0;
}

// Time Complexity: O(N)

