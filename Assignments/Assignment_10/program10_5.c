///////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description :   Converts area from square feet to square meter
// Input :         int
// Output :        double
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue) 
{
    // Logic: 1 square feet = 0.0929 Square meter
    double dMeter = 0.0;
    dMeter = iValue * 0.0929;
    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet");
    scanf("%d",&iValue); 
    
    dRet = SquareMeter(iValue);
    
    printf("Area in square meters is %f\n", dRet);
    
    return 0;
}

