///////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description :   It converts the case of a character
// Input :         char
// Output :        void
// Author :        Rushikesh baban dhande
// Date :          23/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char CValue)
{

    if (CValue >= 'a' && CValue <= 'z') // Check if it is lowercase
    {

        printf("%c\n", CValue - 32); // Convert to uppercase
    }

    else if (CValue >= 'A' && CValue <= 'Z') // Check if it is uppercase
    {

        printf("%c\n", CValue + 32); // Convert to lowercase
    }

    else
    {
        printf("Not an alphabet character.\n"); // characters that are not alphabets ..
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
