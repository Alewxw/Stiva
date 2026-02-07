#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {

    t_stiva s;
    int e = -1;

    stiva_init(&s, 20);

    while ( e != 0 ) {
        printf("Ce valoare vrei sa adaugi in stiva?\n");
        scanf("%d", &e);

        if ( e != 0 ) printf("Stiva arata astfel: \n");

        if ( e != 0 )
        {
            stiva_push(&s, e);
            stiva_print(s);
        }
    }

    while ( !stiva_empty(s) )
    {
        stiva_pop(&s);
        stiva_print(s);
    }

    stiva_free(&s);

    return 0;
}
