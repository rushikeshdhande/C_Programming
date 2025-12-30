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

void DisplayOdd(PNODE Head)
{
    while (Head != NULL)
    {
        if (Head->Data % 2 != 0)
        {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 31);
    InsertFirst(&First, 42);

    printf("Odd elements: ");
    DisplayOdd(First);
    printf("\n");

    return 0;
}
