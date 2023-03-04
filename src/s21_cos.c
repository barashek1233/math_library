#include "s21_math.h"

long double s21_cos(double angle) {
  double result = 1;
  double step = 1;
  double i = 1;
  angle = s21_fmod(angle, 2 * S21_PI);
  while (s21_fabs(step) > S21_EPS) {
    step *= -angle * angle / ((2 * i - 1) * (2 * i));
    result += step;
    i++;
  }
  return result;
}