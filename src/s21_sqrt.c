#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = 4, y = 0;
  while (s21_fabs(res - y) > S21_EPS) {
    if (x == 0) {
      return 0;
    }
    if (x < 0) {
      res = -0.0 / 0.0;
      break;
    }
    y = res;
    res = (y + x / y) / 2;
  }
  return res;
}