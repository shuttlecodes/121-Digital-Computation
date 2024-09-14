#include <cmath>
#include "polynomial.h"

Polynomial::Polynomial() {
  // Deliberately left empty
}

Polynomial::Polynomial(double intercept) {
  coefficients[0] = intercept;
}

Polynomial::Polynomial(double coefs_in[], char symbol_in) : symbol(symbol_in) {
  for (int i = 0; i <= MAX_DEGREE; i++)
    coefficients[i] = coefs_in[i];
}

Polynomial::Polynomial(double coefs_in[]) {
  for (int i = 0; i <= MAX_DEGREE; i++)
    coefficients[i] = coefs_in[i];
}

int Polynomial::apply(int x) const {
  int sum = 0;
  for (int i = 0; i <= MAX_DEGREE; i++)
    sum += coefficients[i] * pow(x, i);

  return round(sum);
}

Polynomial operator +(const Polynomial& f1, const Polynomial& f2) {
  double coefficients[MAX_DEGREE + 1];
  for (int i = 0; i <= MAX_DEGREE; i++)
    coefficients[i] = f1.coefficients[i] + f2.coefficients[i];
  return Polynomial(coefficients, f1.symbol);
}

Polynomial operator -(const Polynomial& f1, const Polynomial& f2) {
  double coefficients[MAX_DEGREE + 1];
  for (int i = 0; i <= MAX_DEGREE; i++)
    coefficients[i] = f1.coefficients[i] - f2.coefficients[i];
  return Polynomial(coefficients, f1.symbol);
}
