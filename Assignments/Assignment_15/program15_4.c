///////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Description :   Return multiplication of all digits
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;  
    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    if(iNo == 0)
    {
        return 0; 
    }
 
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        // As per examples (1018 -> 8), treat 0 as 1
        if(iDigit != 0)
        {
            iMult = iMult * iDigit; // Multiply non-zero digits
        }
        
        iNo = iNo / 10;
    }

    return iMult; // Return total multiplication
}

int main()
{
    int iValue = 0;
    int iRet = 0; 
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = MultDigits(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) - where N is the number of digits 

