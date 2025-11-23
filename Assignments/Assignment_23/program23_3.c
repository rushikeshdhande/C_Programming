/*
Output:
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)     // odd row → alphabets
        {
            char ch = 'a';
            for(int j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        else               // even row → numbers
        {
            for(int j = 1; j <= iCol; j++)
            {
                printf("%d ", j);
            }
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
