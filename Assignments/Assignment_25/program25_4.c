/*
Output:
* * * * * *
* * *
* * *
* * *
* * *
* * * * * *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        if(i == 1 || i == iRow)   // first & last row
        {
            for(int j = 1; j <= iCol; j++)
                printf("* ");
        }
        else                      // middle rows
        {
            for(int j = 1; j <= 3; j++)
                printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
