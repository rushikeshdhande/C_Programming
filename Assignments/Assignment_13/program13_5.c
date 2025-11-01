///////////////////////////////////////////////////////////
//
// Function Name : sum_even_numbers
// Description :   Find sum of even numbers up to N
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int sum_even_numbers(int limit) 
{
    // Logic to sum even numbers from 1 to limit
    int i = 0;
    int iSum = 0;

    if(limit < 1)
    {
        return 0; // Or handle as error
    }

    for(i = 1; i <= limit; i++)
    {
        // Check if the number is even
        if((i % 2) == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main(void)
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    
    printf("%d\n", sum_even_numbers(limit));
    
    return 0;
}

// Time Complexity: O(N)

