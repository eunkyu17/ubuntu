#include <iostream>

void swap(int a , int b)

int tmp -a;
a = b;
b = tmp;


void swap2(int *pa, )
int main()
{
    int a = 100;
    int b = 200;

    std::cout << "a :" << a << '\t' << "b: " << b << std::endl;
    swap(a, b);

    std::cout << "a :" << a << '\t' << "b: " << b << std::endl;

    return 0;
}