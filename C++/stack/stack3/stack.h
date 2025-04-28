#ifndef STACK_H
#define STACK_H
#define STACKSIZE 100

typedef struct stack {
    int arrat[STACKSIZE];
    int tos;
};

void initStack(Stack*ps);

void push(Stack *ps, int data);
int pop(Stack *ps);

#endif