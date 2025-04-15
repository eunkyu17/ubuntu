#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex;   // 클래스 선언  
friend std::ostream& operator << (std :: ostream& out, const Complex& rhs);

private:
     double re;
     double im;

public:
     Complex(double re = 0.0, double im = 0.0);    //디폴트(default argument) 인자는 뒷쪽에서부터 쓰기(0.0)
     Complex(const Complex& rhs);                  // copy constructor 
     ~Complex();

     Complex& operator=(const Complex& rhs);

     bool operator=(const Complex& rhs);      // bool 타입 = 논리를 나타냄
     
     const Complex operator+(const Complex& rhs);
     // +,-,*, /

     // get. set ??? X
};

#endif