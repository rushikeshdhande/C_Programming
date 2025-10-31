///////////////////////////////////////////////////////////
//
// Function Name : main
// Description :   Accepts a name from the user and prints it
// Input :         string (from user)
// Output :        string (to console)
// Author :        Rushikesh baban dhande
// Date :          26/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name");

    scanf("%[^\n]s", Name);

    printf("\nYour name is %s", Name);

    return 0;
}
