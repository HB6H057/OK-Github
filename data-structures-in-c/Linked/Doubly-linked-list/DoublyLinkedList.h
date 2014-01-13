/**************************************************************************
*Module Name: Doubly linked list
*Module Date: 2014-01-13
*Module Auth: Wei Huang (www.hb6.org)
*Description: Basic operation of Doubly linked list(have bug)
*
**************************************************************************/
#ifndef DOUBLYLINKEDLIST_H_INCLUDED
#define DOUBLYLINKEDLIST_H_INCLUDED
#define ELEMTYPE int

typedef struct doublylinkedNode //doubly linked Node
{
    ELEMTYPE dat;
    struct doublylinkedNode *prev, *next;
}DULNODE;

typedef struct doublylinkedList //doubly linked List
{
    DULNODE *firstNode, *lastNode;

}DULIST;

DULIST * dulist_create(void);
int dulist_addelem(DULIST * pHead, ELEMTYPE dat);
ELEMTYPE dulist_delelem(DULIST * pHead);
int dulist_length(DULIST * pHead);
int dulist_travel_rear(DULIST * pHead);
int dulist_travel_front(DULIST * pHead);


#endif // DOUBLYLINKEDLIST_H_INCLUDED
