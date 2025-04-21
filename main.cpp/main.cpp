#include <iostream>
#include "queue.h"

int main()
{
     Queue q1(10);     // Queue q1 = 10; ??
     Queue q2;         // Queue q2(100);
     //Queue q3 = q2;  // ???

     // q1 = q2        // x

     q1.push(100);
     q2.push(200);
     q2.push(300);

     while (!q2 empty()){
        std::cout << q2.pop()
     }

    return 0;
}