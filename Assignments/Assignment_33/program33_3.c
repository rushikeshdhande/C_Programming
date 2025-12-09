#include <stdio.h>

void Display(int i)
{
    if(i < 1)
        return;

    printf("%d ", i);
    Display(i - 1);
}

int main()
{
    Display(5);
    return 0;
}
