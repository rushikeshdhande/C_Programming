#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("ASCII Table:\n");
    printf("-----------------------------------------------------------\n");
    printf("Decimal\tHex\tOctal\tCharacter\n");
    printf("-----------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%o\t%c\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}
