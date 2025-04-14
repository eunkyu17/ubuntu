#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
public :
     Complex();                       // default constructor( 기본 생성자-입력값이 없는 생성자)
     Complex(double re);              // convert.constructor( 변환 생성자-입력값이 하나 있는 생성자)
     Complex(double re, double im);   
     ~Complex();
     
     // void operator=(Complex c);
     //void operator=(const Complex *pc);
     void operator=(const Complex rc);

     //int  operator==(const Complex& rc);
     bool operator==(const Complex& rc);

     double real();
     double imag();

     void real(double re);
     void imag(double im);

private :
     double re;
     double im;

};

#endif