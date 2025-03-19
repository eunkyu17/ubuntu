#include <stdio.h>
float hello(int a, int b);
int main(void){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    float result = hello(a , b);
    printf("%f\n", result);
    return 0;
}
float hello(int a, int b){
    
    
    return a / b;
}