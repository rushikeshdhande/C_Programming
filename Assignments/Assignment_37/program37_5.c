#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int SumDigit(PNODE Head)
{
    int num, sum;
    while (Head != NULL)
    {
        num = Head->Data;
        sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        printf("%d ", sum);
        Head = Head->Next;
    }
    return 0;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    SumDigit(First);
    return 0;
}
