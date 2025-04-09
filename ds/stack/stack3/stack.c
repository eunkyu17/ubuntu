#include "stack.h"

void initStack(Stack *ps)
{
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