#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

NODE * llist_create(void)//Create list head node
{
    NODE *listHead = (NODE *) malloc(sizeof(NODE));

    listHead->dat = 0;
    listHead->pNext = NULL; //Initialize list head node;

    return listHead;
}

int llist_length(NODE * listHead) //list length
{

    NODE * listPtr = listHead;
    int len = 0;
    if ( !listHead )
        return 0;

    while ( listPtr = listPtr->pNext )
    {
        len++;
    }
    return len;
}


int llist_isEmpty(NODE * listHead) //Is List empty ?
{
    return (listHead->pNext) ? 0 : 1;
}

int llist_append(NODE * listHead, DATTYPE dat)//append element to list
{
    NODE * listPtr = listHead;
    NODE * newNode = NULL;  //a new Node pointer

    if ( !listHead )
    return 0;

    while ( listPtr->pNext )
        listPtr = listPtr->pNext;

    newNode = (NODE *)malloc(sizeof(NODE)); //apply memory space

    if ( !newNode )
        return 0;

    newNode->dat = dat;
    newNode->pNext = NULL;

    listPtr->pNext = newNode;
    return 1;
}

int llist_travel(NODE * listHead)
{
    NODE * listPtr = listHead;

    if ( !listHead )
        return 0;

    printf("\nLikedlist:");  //showed data
    while ( listPtr = listPtr->pNext )
    {

        printf(" %d", listPtr->dat);
    }
    return 1;
}

int llist_delete(NODE * listHead, int n) //delete a element of list
{
    NODE * listPtr = listHead;
    NODE * tempPtr = NULL; //temparory Ptr

    if ((n <= 0) || (n > llist_length(listHead)))
    {
        printf("\ninput n is error!");
        return 0;
    }

    while ( n - 1 )
    {
        listPtr = listPtr->pNext;
        n--;
    }

    tempPtr = listPtr->pNext;
    listPtr->pNext = listPtr->pNext->pNext; //point next node
    free(tempPtr);
    printf("\nElement was successfully deleted!");
    return 1;
}

int llist_insert(NODE * listHead, int n, DATTYPE dat) //insert a element to list
{
    NODE * listPtr = listHead;
    NODE * newNode = NULL;
    if ((n <= 0) || (n > (llist_length(listHead) + 1)))
    {
        printf("\ninput n is error!");
        return 0;
    }

    newNode = (NODE *)malloc(sizeof(NODE));
    newNode->dat = dat;
    while (n - 1)
    {
        listPtr = listPtr->pNext;
        n--;
    }

    newNode->pNext = listPtr->pNext;
    listPtr->pNext = newNode;
     printf("\nElement was successfully insert!");
    return 1;
}



