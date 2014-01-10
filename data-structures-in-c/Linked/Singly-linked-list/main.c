#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void)
{
    NODE *listHead;

    listHead = llist_create();

    llist_append(listHead, 1);
    llist_append(listHead, 2);

    llist_travel(listHead);

    printf("\nlist length : %d", llist_length(listHead));

    llist_delete(listHead, 1);
    llist_insert(listHead, 1, 8);
    llist_insert(listHead, 1, 8);
    llist_insert(listHead, 1, 8);
    llist_insert(listHead, 1, 8);
    llist_insert(listHead, 1, 8);
    llist_travel(listHead);
    return 0;
}
