///////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description :   Calculates the area of a circle
// Input :         float
// Output :        double
// Author :        Rushikesh baban dhande
// Date :          01/11/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    const float PI = 3.14;
    // Logic: Area = PI * Radius * Radius
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    // Print the result. %f works for printing double  .
    printf("Area of circle is: %f", dRet);

    return 0;
}
