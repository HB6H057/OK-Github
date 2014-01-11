#include <stdio.h>
#include <stdlib.h>
#include "scirList.h"
int main(void)
{
    SCIRL * listHead = NULL;
    listHead = create_scirlist(1);
    travel_scirlist(listHead);
    printf("\n-----------add dat!");
    addelem_scirlist(listHead, 2);
    addelem_scirlist(listHead, 3);
    addelem_scirlist(listHead, 4);
    addelem_scirlist(listHead, 5);
    travel_scirlist(listHead);
    printf("\n-----------del dat!");
    delelem_scirlist(listHead);
    delelem_scirlist(listHead);
    delelem_scirlist(listHead);
    delelem_scirlist(listHead);
    delelem_scirlist(listHead);
    travel_scirlist(listHead);
    printf("\n-----------add dat!");
    addelem_scirlist(listHead, 2);
    addelem_scirlist(listHead, 3);
    addelem_scirlist(listHead, 4);
    addelem_scirlist(listHead, 5);
    printf("\n-----------insert dat!");
    insertelem_scirlist(listHead, 99, 10);
    insertelem_scirlist(listHead, 3, 11);
    travel_scirlist(listHead);
}
