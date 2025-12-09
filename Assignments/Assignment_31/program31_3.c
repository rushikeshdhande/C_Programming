#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return index;
        }
        index++;
        str++;
    }
    return -1;   // Not found
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    getchar();

    printf("Enter the character : ");
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
