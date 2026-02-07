#ifndef _stack
#define _stack

typedef struct stiva{
    int top;
    int *data;
}t_stiva;

void stiva_init( t_stiva *s, int init_size );

void stiva_push ( t_stiva *s, int x );

int stiva_pop ( t_stiva *s );

int stiva_empty ( t_stiva s);

void stiva_print ( t_stiva s );

void stiva_free ( t_stiva *s);

#endif // _stack
