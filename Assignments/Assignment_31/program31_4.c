#include <stdio.h>

int LastChar(char *str, char ch)
{
    int index = 0;
    int lastIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            lastIndex = index;
        }
        index++;
        str++;
    }

    return lastIndex;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    getchar();

    printf("Enter the character : ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
