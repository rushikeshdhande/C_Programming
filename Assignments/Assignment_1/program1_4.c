///////////////////////////////////////////////////////////
//
// Function Name : Check
// Description :   It checks if a number is divisible by 5
// Input :         int
// Output :        bool (true/false)
// Author :        Rushikesh baban dhande
// Date :          21/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h> // add bool headr file true and false 

bool Check(int iNo) 
{
    if((iNo % 5) == 0) 
    {
        return true;
    }
    else
    {
        return false; 
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false; 

    printf("Enter number: "); 
    
    scanf("%d" ,&iValue); 
    
    bRet = Check(iValue);
    
    if(bRet == true)
    {
        printf("Divisible by 5\n"); 
    }
    else
    {
        printf("Not Divisible by 5\n"); 
    }
    
    return 0;
}

