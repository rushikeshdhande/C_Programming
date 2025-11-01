///////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description :   Converts temperature from Fahrenheit to Celsius
// Input :         float
// Output :        double
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    // logic: (Celsius = (Fahrenheit - 32) * (5/9))
    // We use 5.0/9.0 to ensure floating-point division
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32.0) * (5.0 / 9.0);
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);  
    
    dRet = FhtoCs(fValue);
    
    printf("Temperature in celsius is %f\n", dRet); 
    
    return 0;
}

