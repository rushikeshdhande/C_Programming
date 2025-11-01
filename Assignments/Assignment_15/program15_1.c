///////////////////////////////////////////////////////////
//
// Function Name : CountEven
// Description :   Count frequency of even digits
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
 
    if(iNo == 0)
    {
        return 1; // 0 is an even digit
    }
 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop through digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        // Check if the digit is even
        if((iDigit % 2) == 0)
        {
            iCount++; 
        }
        iNo = iNo / 10;
    }

    return iCount; // Return the total count
}

int main()
{
    int iValue = 0;
    int iRet = 0; 
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N)  

