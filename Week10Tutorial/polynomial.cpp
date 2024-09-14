#include <cmath>
#include "polynomial.h"

Polynomial::Polynomial(){}

Polynomial::Polynomial(double coefs_in[], char symbol_in);
{
  for(int i = 0; i <= MAX_DEGREES; i++) //MAX_DEGREES is defined in polynomial.cpp since .h file included
  {
    coefficients[i] = coefs_in[i]
  }
}

Polynomial::Polynomial(double coefs_in[]);
{
  for(int i = 0; i <= MAX_DEGREES; i++)
  {
    coefficients[i] = coefs_in[i]
  }
}

int Polynomial::apply(int x) const { //Consider how polynomials are sum of a_n*x^n
  double sum = 0;
  for(int i = 0; i <= MAX_DEGREES; i++)
  {
    sum += coefficnets[i] * pow(x,i);//pow function from cmath library
  }

  return round(sum); //round numbers so it looks 'prettier'
}
