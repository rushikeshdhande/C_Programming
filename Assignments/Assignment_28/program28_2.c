#include <stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')   // capital → small
    {
        printf("%c\n", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z') // small → capital
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);    // print as it is
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
