#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = (long long int)x;

  if (x == S21_INF || S21_isNan(x) || x == S21_NINF) {
    res = x;
  } else if (x > 0.0 && res != x) {
    res += 1;
  }

  return res;
}