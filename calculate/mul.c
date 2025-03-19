#include <stdio.h>
int hello(int a, int b);
int main(void){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = hello(a , b);
    printf("%d\n", result);
    return 0;
}
int hello(int a, int b){
    
    
    return a * b;
}