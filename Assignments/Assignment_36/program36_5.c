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

int Minimum(PNODE Head)
{
    int min = Head->Data;
    while (Head != NULL)
    {
        if (Head->Data < min)
            min = Head->Data;
        Head = Head->Next;
    }
    return min;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 90);
    InsertFirst(&First, 10);

    printf("Minimum : %d", Minimum(First));
    return 0;
}
