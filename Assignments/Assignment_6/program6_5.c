///////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description :   Calculates percentage from total and obtained marks
// Input :         int, int
// Output :        float
// Author :        Rushikesh baban dhande
// Date :          31/10/2025
//
///////////////////////////////////////////////////////////

#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fAns = 0.0f;

    if (iTotal == 0)
    {
        return 0.0f;
    }

    if (iObtained < 0 || iObtained > iTotal)
    {
        printf("Invalid marks entered.\n");
        return 0.0f;
    }

    fAns = ((float)iObtained / (float)iTotal) * 100.0f;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if (fRet > 0.0f)
    {
        printf("Percentage is %.1f%%", fRet);
    }

    return 0;
}
