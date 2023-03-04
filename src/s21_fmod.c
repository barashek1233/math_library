#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long long int sum;
  long double res, rem;
  if (y == 0 || x == S21_INF) {
    rem = S21_NAN;
  } else if (y == S21_INF) {
    rem = x;
  } else {
    sum = (long long int)(x / y);
    res = y * (long double)sum;
    rem = x - res;
    if (x < 0 && res < x)
      rem = y;
    else if (x >= 0 && res > x)
      rem = y;
  }
  return rem;
}