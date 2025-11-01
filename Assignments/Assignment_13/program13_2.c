///////////////////////////////////////////////////////////
//
// Function Name : print_even_numbers
// Description :   Prints all even numbers up to N
// Input :         int
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void print_even_numbers(int limit)
{
    // logic to print even numbers from 1 up to limit
    int i = 0;

    if (limit < 1)
    {
        printf("Invalid input\n");
        return;
    }

    for (i = 1; i <= limit; i++)
    {
        // Check if the number is even
        if ((i % 2) == 0)
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

    print_even_numbers(limit);

    return 0;
}

// Time Complexity: O(N)
