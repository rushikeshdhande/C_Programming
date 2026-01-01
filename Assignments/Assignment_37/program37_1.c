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

int DisplayPerfect(PNODE Head)
{
    int sum = 0;
    PNODE temp = Head;

    while (temp != NULL)
    {
        sum = 0;
        for (int i = 1; i <= temp->Data / 2; i++)
        {
            if (temp->Data % i == 0)
                sum += i;
        }
        if (sum == temp->Data)
            printf("%d ", temp->Data);

        temp = temp->Next;
    }
    return 0;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPerfect(First);
    return 0;
}
