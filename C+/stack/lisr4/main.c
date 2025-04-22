#include "list.h"

void prinInt(const void *pData)
{
    printf("%d", *(int *) PData);
}


void printDouble (const void *pData)
{
     printf("&f", *(double *) pData);
}

int main(void)
{   
    List list, lisr2;
    initList(&list1, sizeof(int));
    initList(&list2, sizeof(double));

  int i =4;              insertFirstNode(&list1,&1); // [4]
  i = 3;                 insertFirstNode(&list1,&1); // [3,4]
  i = 1;                 insertFirstNode(&list1,&1); // [1,3,4]
  int j =1;  
  i = 2;                 insertNode(&list1 &j, &i); // [1, 2, 3,4]
  i = 3;                 deleteNode(&list, &i);     //[1, 2, 4]
    printList(&list1, printInt);

    double d =4.4;           insertFirstNode(&list2,&d); // [4.4]
    d = 3.3;                 insertFirstNode(&list2,&d); // [3.3 ,4.4]
    d = 1.1;                 insertFirstNode(&list2,&d); // [1.1 ,3.3 ,4.4]
    double f =1.1;  
    d = 2.2;                 insertNode(&list2, &f, &i); // [1.1 , 2.2 , 3.3 ,4.4]
    d = 3.3;                 deleteNode(&list, &i);     //[1.1 , 2.2 , 4.4]
      printList(&list2, printDouble);
      
    


    
    
    insertNode(&list,1,2); // [1,2,3,4]
    printList(&list);

    deleteNode(&list,3); //[1,2,4];
    printList(&list);


    cleanupList(&list);
    return 0;
}