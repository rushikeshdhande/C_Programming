///////////////////////////////////////////////////////////
//
// Function Name : CountFour
// Description :   Count frequency of 4 in a number
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
 
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Handle 0 input explicitly
    if(iNo == 0)
    {
        return 0;
    }

    // Loop through digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++; // Increment counter if digit is 4
        }
        iNo = iNo / 10;
    }

    return iCount; 
}

int main()
{
    int iValue = 0;
    int iRet = 0; 
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountFour(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) 

