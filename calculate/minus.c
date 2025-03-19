#include <stdio.h>
int minus(int a, int b);
int main(void){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = minus(a , b);
    printf("%d\n", result);
    return 0;
}
int minus(int a, int b){
    
    
    return a - b;
}