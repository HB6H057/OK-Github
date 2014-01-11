/**************************************************************************
*Module Name: single circular linked list
*Module Date: 2014-01-11
*Module Auth: Wei Huang (www.hb6.org)
*Description: Basic operation of single circular linked list(insert have bug)
**************************************************************************/
#ifndef SCIRLIST_H__
#define SCIRLIST_H__
#define ELEMTYPE int
typedef struct scirlist_Node //Single circularly linked list Node
{
    ELEMTYPE dat;
    int headflag;
    struct scirlist_Node * pNext;
}SCIRL;

SCIRL * create_scirlist(ELEMTYPE dat);// Create and Initialized list
int addelem_scirlist(SCIRL * listHead, ELEMTYPE dat); //add a element to list
ELEMTYPE delelem_scirlist(SCIRL * listHead);// delete a element of list
int length_scirlist(SCIRL *listHead);// list length
int insertelem_scirlist(SCIRL * listHead, int n, ELEMTYPE dat);//insert
int travel_scirlist(SCIRL * listHead); //have bug
#endif // SCIRLIST_H__
