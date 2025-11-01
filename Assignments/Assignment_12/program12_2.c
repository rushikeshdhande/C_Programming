///////////////////////////////////////////////////////////
//
// Function Name : countFactors
// Description :   Counts all positive factors of a given number
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int countFactors(int number)
{
    // Logic to return the total number of positive factors of 'number'
    int i = 0;
    int iCnt = 0;

    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)
    {
        return 0;
    }

    for (i = 1; i <= number; i++)
    {
        // If 'i' divides 'number' perfectly, it's a factor
        if ((number % i) == 0)
        {
            iCnt++; // increment the count
        }
    }

    return iCnt;
}

int main()
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", countF(number));

    return 0;
}

// Time Complexity: O(N)