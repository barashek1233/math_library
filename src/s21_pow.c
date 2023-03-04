#include "s21_math.h"

long double s21_pow(double base, double exp1) {
  long double pow;
  if (base < 0) {
    base = -base;
    pow = s21_exp(exp1 * s21_log(base));
    if ((int)exp1 % 2 != 0) pow = -pow;
  } else {
    pow = s21_exp(exp1 * s21_log(base));
  }
  return pow;
}
