#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool Search(PNODE Head, int No)
{
    while (Head != NULL)
    {
        if (Head->Data == No)
            return true;
        Head = Head->Next;
    }
    return false;
}

int main()
{
    PNODE First = NULL;
    int no;

    InsertFirst(&First, 11);
    InsertFirst(&First, 21);
    InsertFirst(&First, 51);
    InsertFirst(&First, 101);

    printf("Enter number to search: ");
    scanf("%d", &no);

    if (Search(First, no))
        printf("Number is present\n");
    else
        printf("Number is NOT present\n");

    return 0;
}
