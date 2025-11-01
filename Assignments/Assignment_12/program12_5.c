///////////////////////////////////////////////////////////
//
// Function Name : is_divisible_by_five
// Description :   Checks if a number is divisible by 5
// Input :         int
// Output :        bool
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int number)
{
    // Logic to check if number is divisible by 5
    if((number % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    
    // using ternary operator to print "Yes" or "No"
    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");
    
    return 0;
}

