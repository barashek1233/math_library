#include "s21_math.h"

long double s21_floor(double x) {
  long long y = (long long)x;
  double z = (double)y;
  if (z == x || x >= 0) {
    x = z;
  } else {
    x = z - 1;
  }
  return x;
}
