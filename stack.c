#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void stiva_init ( t_stiva *s, int init_size )
{
    s->data = malloc(init_size * sizeof(int));
    s->top = 0;
}

void stiva_push ( t_stiva *s, int x )
{
    s->data[s->top++] = x;
}

int stiva_pop ( t_stiva *s )
{
    if ( s->top == 0 )
    {
        printf("Stiva goala");
        return -1;
    }
    else
    {
        s->top --;
        return s->data[s->top];
    }
}

int stiva_empty ( t_stiva s )
{
    return s.top == 0;
}

void stiva_print ( t_stiva s )
{
    for ( int i = 0 ; i < s.top ; i ++  )
        printf("%d ", s.data[i]);

    printf("\n");
}

void stiva_free ( t_stiva *s )
{
    free(s->data);
    s->data = NULL;
    s->top = 0;
}
