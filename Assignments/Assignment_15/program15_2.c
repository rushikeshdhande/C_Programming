///////////////////////////////////////////////////////////
//
// Function Name : CountOdd
// Description :   Count frequency of odd digits
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

     if(iNo == 0)
    {
        return 0; // 0 is not odd
    }
 
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        // Check if the digit is odd
        if((iDigit % 2) != 0)
        {
            iCount++; // increment counter if digit is odd
        }
        iNo = iNo / 10;
    }

    return iCount; // return the total count
}

int main()
{
    int iValue = 0;
    int iRet = 0; 
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountOdd(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) 
