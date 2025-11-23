/*
Output:
1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int num = 1;

    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d ", num);
            num++;
            if(num == 10)   // reset after 9
                num = 1;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
