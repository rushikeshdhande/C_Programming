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

int DisplayPrime(PNODE Head)
{
    int flag;
    PNODE temp = Head;

    while (temp != NULL)
    {
        flag = 1;
        if (temp->Data < 2)
            flag = 0;

        for (int i = 2; i <= temp->Data / 2; i++)
        {
            if (temp->Data % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", temp->Data);

        temp = temp->Next;
    }
    return 0;
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    DisplayPrime(First);
    return 0;
}
