///////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description :   Calculates the area of a rectangle
// Input :         float, float
// Output :        double
// Author :        Rushikesh baban dhande
// Date :          30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    // logic: Area = Width * Height
    return (double)fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf("Enter width");
    scanf("%f",&fValue1);
    
    printf("Enter height");
    scanf("%f",&fValue2);
    
    dRet = RectArea(fValue1, fValue2);
    
    printf("Area of rectangle is %f\n", dRet);
    
    return 0;
}
