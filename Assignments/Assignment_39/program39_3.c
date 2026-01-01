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

int LastOccur(PNODE Head, int No)
{
    int pos = 1, last = -1;

    while (Head != NULL)
    {
        if (Head->Data == No)
        {
            last = pos;
        }
        pos++;
        Head = Head->Next;
    }
    return last;
}

int main()
{
    PNODE First = NULL;
    int no;

    InsertFirst(&First, 11);
    InsertFirst(&First, 21);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);

    printf("Enter number: ");
    scanf("%d", &no);

    printf("Last occurrence position: %d\n", LastOccur(First, no));

    return 0;
}
