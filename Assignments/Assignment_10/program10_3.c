///////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description :   Converts kilometres to meters
// Input :         int
// Output :        int
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    // Logic: 1 kilometr = 1000 Meter
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter distance in KM");
    scanf("%d",&iValue);  
    
    iRet = KMtoMeter(iValue);
    
    printf("Distance in meters is %d\n", iRet); 
    
    return 0;
}

