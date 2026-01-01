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

int Addition(PNODE Head)
{
    int sum = 0;
    while (Head != NULL)
    {
        sum += Head->Data;
        Head = Head->Next;
    }
    return sum;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);

    printf("Addition : %d", Addition(First));
    return 0;
}
