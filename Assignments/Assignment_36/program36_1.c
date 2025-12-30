#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/* Insert node at first position */
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

/* 1. Search First Occurrence */
int SearchFirstOcc(PNODE Head, int no)
{
    int pos = 1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            return pos;
        }
        Head = Head->Next;
        pos++;
    }
    return -1;   // Not found
}

/* 2. Search Last Occurrence */
int SearchLastOcc(PNODE Head, int no)
{
    int pos = 1, lastPos = -1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            lastPos = pos;
        }
        Head = Head->Next;
        pos++;
    }
    return lastPos;
}

/* 3. Addition of all elements */
int Addition(PNODE Head)
{
    int sum = 0;

    while (Head != NULL)
    {
        sum = sum + Head->Data;
        Head = Head->Next;
    }
    return sum;
}

/* 4. Find Maximum element */
int Maximum(PNODE Head)
{
    int max = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > max)
        {
            max = Head->Data;
        }
        Head = Head->Next;
    }
    return max;
}

/* 5. Find Minimum element */
int Minimum(PNODE Head)
{
    int min = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data < min)
        {
            min = Head->Data;
        }
        Head = Head->Next;
    }
    return min;
}

/* MAIN FUNCTION */
int main()
{
    PNODE First = NULL;
    int ret = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    ret = SearchFirstOcc(First, 30);
    printf("First Occurrence of 30 : %d\n", ret);

    ret = SearchLastOcc(First, 30);
    printf("Last Occurrence of 30 : %d\n", ret);

    ret = Addition(First);
    printf("Addition of all elements : %d\n", ret);

    ret = Maximum(First);
    printf("Maximum element : %d\n", ret);

    ret = Minimum(First);
    printf("Minimum element : %d\n", ret);

    return 0;
}
