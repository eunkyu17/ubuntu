#include "calc.h"
int main(void){
   int a,b;
   printf("a value : \n");
   scanf("%d", &a);
   printf("b value : \n");
   scanf("%d", &b);
   printf("a result : %d\n" , add(a , b));
   printf("a result : %d\n" , minus(a , b));
   printf("a result : %d\n" , mul(a , b));
   printf("a result : %d\n" , div(a , b));
   printf("a result : %d\n" , remain(a , b));

}