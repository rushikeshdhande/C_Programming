/*
Output:
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)         // First & last row → Print numbers
                printf("%d ", j);

            else if(j == 1 || j == iCol)    // First & last column → Print numbers
                printf("%d ", j);

            else                             // Middle area → stars  
                printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
