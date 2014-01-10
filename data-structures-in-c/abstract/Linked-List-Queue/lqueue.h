/**************************************************************************
*Module Name: linked list queue
*Module Date: 2014-01-10
*Module Auth: Wei Huang (www.hb6.org)
*Description: Basic operation of Linked list queue 
**************************************************************************/

#ifndef LQUEUE_H_INCLUDED
#define LQUEUE_H_INCLUDED
#define DATTYPE int
typedef struct q_list //queue element
{
    DATTYPE dat;
    struct q_list *pNext;
}QLIST;

typedef struct list_queue //queue
{
    QLIST * rear, *front;
    int length;
}LQUEUE;

LQUEUE * creat_queue(void); //Create and initialize a queue;
int Enqueue(LQUEUE * pQ, DATTYPE dat); // Enqueue
DATTYPE Dequeue(LQUEUE *pQ); //Dequeue
int Isempty_queue(LQUEUE * pQ); //Is queue empty?

#endif // LQUEUE_H_INCLUDED
