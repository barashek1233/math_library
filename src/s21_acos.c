#include "s21_math.h"

long double s21_acos(double x) {
  long double res = S21_NAN;
  if (s21_fabs(x) < 1) {
    res = S21_PI / 2 - s21_asin(x);
  } else if (x == 1) {
    res = 0.0;
  } else if (x == -1) {
    res = S21_PI;
  }
  return res;
}
