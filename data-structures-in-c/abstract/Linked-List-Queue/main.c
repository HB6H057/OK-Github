#include <stdio.h>
#include <stdlib.h>
#include "lqueue.h"

int main(void)
{
    int i;
    LQUEUE * pQ = NULL;

    printf("Hello world!\n");
    pQ = creat_queue();
    Enqueue(pQ, 1);
    Enqueue(pQ, 2);
    Enqueue(pQ, 3);
    Enqueue(pQ, 4);
    printf("³ö¶Ó:");
    for (i = 0; i < 4; i++)
       printf(" %d", Dequeue(pQ));

    printf("\n%d", Isempty_queue(pQ));

    return 0;
}
