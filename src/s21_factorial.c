#include "s21_math.h"

long double s21_factorial(long long int x) {
  if (x <= 1) return 1;
  long double fact = x * s21_factorial(x - 1);
  return fact;
}