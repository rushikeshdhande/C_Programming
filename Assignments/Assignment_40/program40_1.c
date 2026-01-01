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

void DisplayGreater(PNODE Head, int X)
{
    while (Head != NULL)
    {
        if (Head->Data > X)
        {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;
    int x;

    InsertFirst(&First, 10);
    InsertFirst(&First, 25);
    InsertFirst(&First, 5);
    InsertFirst(&First, 40);

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Elements greater than %d: ", x);
    DisplayGreater(First, x);
    printf("\n");

    return 0;
}
