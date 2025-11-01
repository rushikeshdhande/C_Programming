///////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description :   Count frequency of digits between 3 and 7
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0; 

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
        // Check if the digit is > 3 AND < 7 (i.e., 4, 5, 6)
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++; // Increment counter if digit is in range
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
    
    iRet = CountRange(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) 