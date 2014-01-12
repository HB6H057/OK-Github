#include <stdio.h>
#include "scirList.h"

SCIRL * create_scirlist(void)// Create and Initialized list
{
    SCIRL * listHead = NULL;
    listHead = (SCIRL *)malloc(sizeof(SCIRL));
    if (!listHead){
        printf("\nCreate list error!");
        return 0;
    }

    listHead->pNext = listHead;
    listHead->dat = 0;
    return listHead;

}
int addelem_scirlist(SCIRL * listHead, ELEMTYPE dat) //add a element to list
{
    SCIRL * listPtr = listHead;
    SCIRL * listNode = NULL;
    listNode = (SCIRL *)malloc(sizeof(SCIRL));

    if (!listNode){
        printf("\nCreate list error!");
        return 0;
    }

    for (; listPtr->pNext != listHead;){
        listPtr = listPtr->pNext;
    }

    listPtr->pNext = listNode;
    listNode->pNext = listHead;
    listNode->dat = dat;

    return 1;
}
ELEMTYPE delelem_scirlist(SCIRL * listHead)// delete a element of list
{
    ELEMTYPE dat;
    SCIRL * listPtr = listHead;
    SCIRL * tmpPtr  = NULL;

    if (listHead == listHead->pNext){
        printf("\n This list is empty");
        return 0;
    }

    for (; listPtr->pNext->pNext != listHead; ){
        listPtr = listPtr->pNext;
    }

    tmpPtr = listPtr->pNext;
    listPtr->pNext = listHead;
    dat = tmpPtr->dat;
    free(tmpPtr);
    return dat;
}
int length_scirlist(SCIRL *listHead)// list length
{
    int len;
    SCIRL * listPtr = listHead;
    for (len = 0; listPtr->pNext != listHead; len++){
        listPtr = listPtr->pNext;
    }

    return len;

}

int insertelem_scirlist(SCIRL * listHead, int n, ELEMTYPE dat)//insert
{
    SCIRL * listPtr = listHead;
    SCIRL * elemPtr = NULL;
    int len = length_scirlist(listHead);
    if ( (n <= 0) || ( n > len ) ){
        printf("\ninput n is error");
        return 0;
    }

    elemPtr = (SCIRL *)malloc(sizeof(SCIRL));
    elemPtr->dat = dat;

    if (!elemPtr){
        printf("\nCreate element error!");
        return 0;
    }


    while (n - 1){
        n--;
        listPtr = listPtr->pNext;
    }


    elemPtr->pNext = listPtr->pNext;
    listPtr->pNext = elemPtr;

    return 1;

}

int travel_scirlist(SCIRL * listHead)
{
    SCIRL * listPtr = listHead;
    if (!listHead){
        printf("\nlist is error!");
        return 0;
    }

    if (listHead->pNext == listHead){
        printf("\nlist is empty!");
        return 0;
    }

    printf("\nlist dat:");

    do{
        listPtr = listPtr->pNext;
        printf(" %d", listPtr->dat);

    }while (listPtr->pNext != listHead);

    return 1;
}
