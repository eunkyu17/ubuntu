#include <iostream>
#include "complex.h"

int main()
{
    Complex c1;
    Complex c2 = 3.0;                 //Complex c2(3.0); > 이렇게 쓰는 것도 가능 
    Complex c3(3.0, 4.0);

 //c1.real(c3.real());
 //c1.imag(c3.imag());
  c1 = c3;                 // operator=(c1, c3) or c1.operator(c3)
 // c1 = &c3;  ????  X       //c1.operator=(&c3);

 //if (c1.rea() == c3.real() && c1.imag() == c3.imag()) {
   if (c1 ==c3) {            // operator ==(c1, c3) or c1.operator ==(c3)}
     std::cout << "c1 and c3 are equal" << std::endl;
 } else {
     std::cout << "c1 and c3 are not equal" << std::endl;
 }

 std::cout << "c1 : (" <<c1.real() << ", "<< c1.imag() << "i")" << std ::endl;
 std::cout << "c2 : (" <<c2.real() << ", "<< c1.imag() << "i")" << std ::endl;
 std::cout << "c3 : (" <<c3.real() << ", "<< c1.imag() << "i")" << std ::endl;

 return 0;
}