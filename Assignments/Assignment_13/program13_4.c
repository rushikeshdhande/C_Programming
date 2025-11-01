///////////////////////////////////////////////////////////
//
// Function Name : sum_natural_numbers
// Description :   Find sum of first N natural numbers
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int sum_natural_numbers(int limit)
{
    // logic to sum numbers from 1 to limit
    int i = 0;
    int iSum = 0;

    if(limit < 1)
    {
        return 0;  
    }

    for(i = 1; i <= limit; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}

int main()
{
    int limit;
    printf("Enter number : ");
    scanf("%d", &limit);
    
    printf("%d\n", sum_natural_numbers(limit));
    
    return 0;
}

// Time Complexity: O(N)

