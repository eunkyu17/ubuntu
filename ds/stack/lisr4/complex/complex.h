#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:  // implemetation(구현)
  double re;                // 리얼
  double im;               // 이미지

public:  // interface(겉, 껍데기)
    Comlpex(double re, double im );              // constructor
    Complex(double re);
    Comlpex();
   -Complex( );             // destructor

    double real();
    double imag();

     void real (double re);
     void imag (double im);
   
   // ...
};

#endif