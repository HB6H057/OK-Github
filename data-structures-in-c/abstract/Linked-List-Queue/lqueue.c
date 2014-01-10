#include <stdio.h>
#include <stdlib.h>
#include "lqueue.h"

LQUEUE * creat_queue(void) //Create and initialize a queue;
{
    LQUEUE * pQ = NULL;

    pQ = (LQUEUE *)malloc(sizeof(LQUEUE));

    if (!pQ){
        printf("Crete queue error!");
        return NULL;
    }

    pQ->front = NULL;
    pQ->rear = pQ->front;
    pQ->length = 0;

    return pQ;

}
int Enqueue(LQUEUE * pQ, DATTYPE dat) // Enqueue
{
    QLIST * listPtr = NULL;
    listPtr = (QLIST *)malloc(sizeof(QLIST));
    if(!listPtr){
        printf("Create a Node error!");
        return 0;
    }
    if ( Isempty_queue(pQ) ){   //if queue is empty
        pQ->front = listPtr;
        pQ->rear  = listPtr;
    }
    else{
        pQ->front->pNext = listPtr;
        pQ->front = listPtr;
    }
    listPtr->dat = dat;
    listPtr->pNext = NULL;
    pQ->length++;
    return 1;
}
DATTYPE Dequeue(LQUEUE *pQ) //Dequeue
{
    QLIST * tempPtr = NULL;
    DATTYPE dat;
    int len = pQ->length;

    if ( Isempty_queue(pQ) ){
        printf("This queue is empty!");
        return 0;
    }
    else if(pQ->front == pQ->rear){
        tempPtr = pQ->front;
        pQ->rear = NULL;
        pQ->front = NULL;
        dat = tempPtr->dat;
    }
    else{
        tempPtr = pQ->rear;
        pQ->rear = pQ->rear->pNext;
        dat = tempPtr->dat;
    }
    pQ->length--;
    free(tempPtr);
    return dat;
}
int Isempty_queue(LQUEUE * pQ) //Is queue empty?
{
    return ((pQ->front == NULL) || \
            (pQ->rear == NULL)) ? 1 : 0;
}
