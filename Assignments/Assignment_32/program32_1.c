#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *end = src;

    // Move to end of string
    while(*end != '\0')
    {
        end++;
    }
    end--;  // Last valid char

    // Copy in reverse
    while(end >= src)
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';  // Null terminate
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr);  // nohtyP suollevraM

    return 0;
}
