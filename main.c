#include <stdio.h>
#include "list.h"
#include "cal.h"

int main() {

    printf("...Started Main....\n");
    printList();
    add(5,5);
    multiply(5,5);

    printf("...Ended Main....\n");
    return 0;
}
