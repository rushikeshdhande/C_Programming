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

int Maximum(PNODE Head)
{
    int max = Head->Data;
    while (Head != NULL)
    {
        if (Head->Data > max)
            max = Head->Data;
        Head = Head->Next;
    }
    return max;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 90);
    InsertFirst(&First, 40);

    printf("Maximum : %d", Maximum(First));
    return 0;
}
