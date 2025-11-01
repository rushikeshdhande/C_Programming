///////////////////////////////////////////////////////////
//
// Function Name : Count
// Description :   Count frequency of digits less than 6
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle 0 input explicitly
    if(iNo == 0)
    {
        return 1; // 0 is less than 6
    }

    // Handle negative numbers
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop through digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++; // Increment counter if digit is less than 6
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
    
    iRet = Count(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

// Time Complexity: O(N) - 
// where N is the number of digits
// More accurately: O(log10(iNo))

