#include "s21_math.h"
long double s21_asin(double x) {
  long double res = S21_NAN;
  if (s21_fabs(x) < 1) {
    res = s21_atan(x / s21_sqrt(1 - s21_pow(x, 2)));
  } else if (x == -1.0) {
    res = -S21_PI / 2;
  } else if (x == 1.0) {
    res = S21_PI / 2;
  }
  return res;
}
