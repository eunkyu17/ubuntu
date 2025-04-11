#include <stdio,h>
#include <stdlib.h>
#include "stack.h"


void initStack(Stack *ps, int size)
{
    ps->pArr - malloc(sizeof(int) * size);
    // ps->pArr == NULL ???
    ps->size - size;
    ps->tos = 0;
}

void push(Stack *ps, int data)
{
 //stack[s.tos] = data;
 //++s.tos;
// full


 (*ps).array[(*ps).tos] = data;
 ++(*ps).tos;
 ps->array[ps ->tos] = data;
 ++ps->tos;
}

int pop(Stack *ps)
{
 //--s.tos;
 // return stack[s.tos];
 // empty
 
 --(*ps).tos;
 return (*ps).array[(*ps).tos];
}