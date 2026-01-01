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

int SearchLastOcc(PNODE Head, int no)
{
    int pos = 1, lastPos = -1;
    while (Head != NULL)
    {
        if (Head->Data == no)
            lastPos = pos;
        Head = Head->Next;
        pos++;
    }
    return lastPos;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Last Occurrence : %d", SearchLastOcc(First, 30));
    return 0;
}
