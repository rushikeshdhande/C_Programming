///////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description :   Return difference between Even and Odd digit sum
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0; 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    if(iNo == 0)
    {
        return 0; // Even sum (0) - Odd sum (0) = 0
    }

    // Loop through digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        // Check if the digit is even or odd
        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit; // Add to even sum
        }
        else
        {
            iSumOdd = iSumOdd + iDigit; // Add to odd sum
        }
        
        iNo = iNo / 10;
    }

    return iSumEven - iSumOdd; // Return the difference
}

int main()
{
    int iValue = 0;
    int iRet = 0; 
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) 
