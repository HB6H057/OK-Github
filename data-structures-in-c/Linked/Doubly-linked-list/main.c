#include <stdio.h>
#include <stdlib.h>
#include "doublylinkedlist.h"
int main(void)
{
    DULIST * listHead = NULL;
    listHead = dulist_create();
    dulist_travel_rear(listHead);
    printf("\n-----------add dat!");
    dulist_addelem(listHead, 2);
    dulist_addelem(listHead, 3);
    dulist_addelem(listHead, 4);
    dulist_addelem(listHead, 5);
    dulist_travel_front(listHead);
    dulist_travel_rear(listHead);
    printf("\n-----------del dat!");
    dulist_delelem(listHead);
    dulist_delelem(listHead);
    dulist_delelem(listHead);
    dulist_delelem(listHead);
    dulist_travel_front(listHead); //have bug
    printf("\n-----------add dat!");
    dulist_addelem(listHead, 2);
    dulist_addelem(listHead, 3);
    dulist_addelem(listHead, 4);
    dulist_addelem(listHead, 5);
    dulist_travel_front(listHead);
    dulist_travel_rear(listHead);
}
