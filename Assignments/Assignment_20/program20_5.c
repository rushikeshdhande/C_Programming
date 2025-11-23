#include<stdio.h>

void Pattern(int iNo)
{
    int num = 2;

    for(int i = 1; i <= iNo; i++)
    {
        printf("%d ", num);
        num = num + 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
