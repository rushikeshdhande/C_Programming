/////////////////////////////////////////////////////////////////
//
//  Required Header Files
//  Description : This section includes necessary header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : This function prints the message
//                  "Jay Ganesh..." multiple times on screen
//  Input         : void
//  Output        : void
//  Author        : Rushikesh Baban Dhande
//  Date          : 10/10/2025
//
/////////////////////////////////////////////////////////////////

void Display()
{
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
    printf("Jay Ganesh...\n");
}

/////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//  Description : This function is intended to be the entry point
//                of the application.
//                As per C standard, main function should return int.
//                Here void main() is used, which may cause
//                standard compliance issues.
//  Author      : Rushikesh Baban Dhande
//  Date        : 10/10/2025
//
/////////////////////////////////////////////////////////////////

// It should be int main
void main()
{      
    /////////////////////////////////////////////////////////////////
    // Function call to Display
    /////////////////////////////////////////////////////////////////

    Display();      
}

/////////////////////////////////////////////////////////////////
//
//  Observation
//
//  According to C language standard,
//  main function should have return type int.
//  Using void main() is compiler dependent
//  and not recommended in standard C.
//
/////////////////////////////////////////////////////////////////
