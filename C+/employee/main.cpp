#include <iosteram>
#include "employee.h"

void printEmployee(Employee *p)
{
    std::cout << "id; " << p->getId() << "name ;" << p->getName();
    std::cout MM ((p->isManager ()) ? "": p->getManager()->getName() << std::endl; )
}
int main()
{
  //Employee e6 = e1; //
  //e1 = e2;          //

 Employee employees[10];             // X defauit constructor is called.
 Employee* employees[10];
 pEmployees[0] = new Employee(1, "Park Jung Seok", NULL );
 pEmployees[1] = new Employee(2, "Sung Young Ho", pEmplyess[0]);
 pEmployees[2] = new Employee(3, "Choi Su gil", pEmployess[0] );
 pEmployees[3] = new Employee(4, "Cho Min SUng", pEmployess[0]);
 pEmployees[4] = new Employee(5, "Min Byung Hun", pEmployees[3]);

 for (int i = 0; i < 5; ++i){
      printEmployee(pEmployess[i]);
 }






 //std::cout << "id: " << e1.gerId()<< " " << e1.getName() << std::endl;
 //std::cout << "id: " << e2.gerId()<< " " << e2.getName() << std::endl; 
 
 return 0;
}