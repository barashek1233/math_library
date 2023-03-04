#include "s21_math.h"
long double s21_atan(double x) {
  long double res = 0;
  if (x == 1) {
    res = 0.785398;
  } else if (x == -1) {
    res = -0.785398;
  } else {
    if (s21_fabs(x) <= 1) {
      for (int i = 0; i < 10000; i++) {
        res += (((s21_pow(-1, i) * s21_pow(x, (1 + 2 * i))) / (1 + 2 * i)));
      }
    } else if (s21_fabs(x) > 1) {
      long double temp = 0;
      for (int i = 0; i < 10000; i++) {
        temp += ((s21_pow(-1, i) * s21_pow(x, (-1 - (2 * i)))) / (1 + (2 * i)));
      }
      res = ((S21_PI * s21_fabs(x)) / (2 * x)) - temp;
    }
  }
  return res;
}
