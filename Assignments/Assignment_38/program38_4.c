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

int Frequency(PNODE Head, int No)
{
    int count = 0;
    while (Head != NULL)
    {
        if (Head->Data == No)
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;
    int no;

    InsertFirst(&First, 11);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertFirst(&First, 11);
    InsertFirst(&First, 51);

    printf("Enter number: ");
    scanf("%d", &no);

    printf("Frequency: %d\n", Frequency(First, no));

    return 0;
}
