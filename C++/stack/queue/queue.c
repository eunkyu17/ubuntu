#include <stdio.h>

int queue[10];
int front;
int rear;

void push(int data){
    queue[rear] = data;
    ++rear;
}

int pop(void){
    int index = front;
    ++front;
    return queue[index];

}


int main(void){
    push(100);
    push(200);
    printf("1st pop() : %d\n", pop());

    push(300);

    printf("2nd pop() : %d\n",pop());
    printf("3rd pop() : %d\n",pop());
}