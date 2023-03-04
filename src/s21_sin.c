#include "s21_math.h"

long double s21_sin(double an) {
  long double sin = 0;
  an = s21_fmod(an, 2 * S21_PI);
  for (int i = 0; i < 15; i++) {
    long double up = s21_pow(-1, i) * s21_pow(an, 2 * i + 1);
    long double down = s21_factorial(2 * i + 1);
    sin += up / down;
  }
  return sin;
}
