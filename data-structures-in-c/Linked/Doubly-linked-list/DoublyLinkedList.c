#include "doublylinkedlist.h"
#include <stdio.h>
#include <stdlib.h>
DULIST * dulist_create(void)
{
    DULNODE * frontNode = NULL;
    DULNODE *rearNode   = NULL;
    DULIST  * pHead     = NULL;

    frontNode = (DULNODE *)malloc(sizeof(DULNODE));
    rearNode  = (DULNODE *)malloc(sizeof(DULNODE));
    pHead     = (DULIST  *)malloc(sizeof(DULIST));

    frontNode->dat = 0;
    rearNode->dat  = 0;
    frontNode->next = rearNode;
    frontNode->prev = NULL;
    rearNode->prev  = frontNode;
    rearNode->next  = NULL;

    pHead->firstNode = frontNode;
    pHead->lastNode  = rearNode;

    return pHead;

}
int dulist_addelem(DULIST * pHead, ELEMTYPE dat)
{
    DULNODE * listPtr = pHead->lastNode->prev;
    DULNODE * nodePtr = (DULIST *)malloc(sizeof(DULNODE));
    nodePtr->dat = dat;
    nodePtr->next = pHead->lastNode;
    nodePtr->prev = listPtr;
    listPtr->next = nodePtr;
    pHead->lastNode->prev = nodePtr;
    return 1;

}
ELEMTYPE dulist_delelem(DULIST * pHead)
{
    ELEMTYPE dat;
    DULNODE * listPtr = pHead->lastNode->prev;

    listPtr->prev = pHead->lastNode;
    pHead->lastNode->prev = listPtr->prev;
    dat = listPtr->dat;

    free(listPtr);

    return dat;
}
int dulist_length(DULIST * pHead)
{
    int len;
    DULNODE * listPtr = pHead->firstNode;
    for (len = 0; listPtr->next != pHead->lastNode; len++){
        listPtr = listPtr->next;
    }

    return len;
}
int dulist_travel_rear(DULIST * pHead)
{
    DULNODE * listPtr = pHead->firstNode;


    if (pHead->firstNode->next == pHead->lastNode){
        printf("\nlist is empty!");
        return 0;
    }

    printf("\nlist dat:");

    do{
        listPtr = listPtr->next;
        printf(" %d", listPtr->dat);

    }while (listPtr->next != pHead->lastNode);

    return 1;
}
//
int dulist_travel_front(DULIST * pHead)
{
    DULNODE * listPtr = pHead->lastNode;


    if (pHead->lastNode->prev == pHead->firstNode){
        printf("\nlist is empty!");
        return 0;
    }

    printf("\nlist dat:");

    do{
        listPtr = listPtr->prev;
        printf(" %d", listPtr->dat);

    }while (listPtr->prev != pHead->firstNode);

    return 1;
}
