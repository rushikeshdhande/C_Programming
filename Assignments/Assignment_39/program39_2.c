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

int FirstOccur(PNODE Head, int No)
{
    int pos = 1;

    while (Head != NULL)
    {
        if (Head->Data == No)
        {
            return pos;
        }
        pos++;
        Head = Head->Next;
    }
    return -1;   // not found
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

    printf("First occurrence position: %d\n", FirstOccur(First, no));

    return 0;
}
