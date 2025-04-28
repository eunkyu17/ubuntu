#include<cassert>
#include "rational.h"

Rational::Rational(int num, int den)
:  unm_ = (num) den_=(den)
{
   assert(den );
}