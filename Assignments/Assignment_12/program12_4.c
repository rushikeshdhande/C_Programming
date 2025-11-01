///////////////////////////////////////////////////////////
//
// Function Name : sum_of_even_factors
// Description :   Returns the sum of all positive even factors, excluding the number itself
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int sum_of_even_factors(int number)
{
    //return sum of all positive even factors excluding 'number'
    int i = 0;
    int iSum = 0;
 
    if(number < 0)
    {
        number = -number;
    }

    if(number == 0)
    {
        return 0;  
    }

     for(i = 1; i < number; i++)
    {
        // Check if it's a factor AND if it's even
        if(((number % i) == 0) && ((i % 2) == 0))
        {
            iSum = iSum + i; // Add the even factor to the sum
        }
    }
    
    return iSum;
}

int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    
    printf("%d\n", sum_of_even_factors(number));
    
    return 0;
}

// Time Complexity: O(N)