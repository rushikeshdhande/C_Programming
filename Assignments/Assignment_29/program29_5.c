#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Move 'end' to last character
    while(*end != '\0')
    {
        end++;
    }
    end--;   // Move to last valid character

    // Swap characters from both ends
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("%s\n", str);
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}
