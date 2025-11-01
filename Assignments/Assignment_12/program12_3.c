///////////////////////////////////////////////////////////
//
// Function Name : sum_of_factors
// Description :   Returns the sum of all positive factors of a number
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int sum_of_factors(int number)
{
    // Logic to return sum of all positive factors of 'number'
    int i = 0;
    int iSum = 0;

     if(number < 0)
    {
        number = -number;
    }

    if(number == 0)
    {
        return 0; // 0 has no positive factors
    }

    // Loop from 1 up to the number
    for(i = 1; i <= number; i++)
    {
        // If 'i' divides 'number' perfectly, it's a factor
        if((number % i) == 0)
        {
            iSum = iSum + i; // Add the factor to the sum
        }
    }
    
    return iSum;
}

int main(void)
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    
    printf("%d\n", sum_of_factors(number));
    
    return 0;
}
// Time Complexity: O(N)
