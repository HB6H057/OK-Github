/**************************************************************************
*Module Name: linked list
*Module Date: 2014-01-04
*Module Auth: Wei Huang (www.hb6.org)
*Description: Basic operation of Linked list
**************************************************************************/
#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#define DATTYPE int

typedef struct Node //
{
    DATTYPE dat;
    struct Node * pNext;
}NODE;

/*function define*/
int llist_isEmpty(NODE * listHead); //Is List empty ?
int llist_length(NODE * listHead); // list length
NODE * llist_create(void); //Create list head node
int llist_append(NODE * listHead, DATTYPE dat);//append element to list
int llist_travel(NODE * listHead); //travel list
int llist_length(NODE * listHead); // list length
int llist_delete(NODE * listHead, int n); //delete a element of list
int llist_insert(NODE * listHead, int n, DATTYPE dat); //insert a element to list

#endif // LINKEDLIST_H_INCLUDED
