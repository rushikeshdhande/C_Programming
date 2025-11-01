///////////////////////////////////////////////////////////
//
// Function Name : CountTwo
// Description :   Count frequency of 2 in a number
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
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

    // Loop through digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount++; // Increment counter if digit is 2
        }
        iNo = iNo / 10;
    }

    return iCount; // Return the total count
}

int main()
{
    int iValue = 0;
    int iRet = 0; // Corrected bRet to iRet
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountTwo(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) 

