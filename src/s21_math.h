#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define S21_PI 3.141592653589793238462643383279502884197169399375105820974944
#define S21_INF 1.0 / 0.0
#define S21_NINF -S21_INF
#define S21_NAN 0.0 / 0.0
#define S21_COS_EPS 1e-6l
#define S21_LN10 2.30258509299404568402
#define S21_isNan(x) __builtin_isnan(x)
#define S21_HUGE_VAL __builtin_huge_val()
#define inf __builtin_isinf
#define nan __builtin_isnan
#define S21_EPS 1e-25
#define S21_PI_2 1.5707963267948965579989817342720925807952880859375
#define S21_E 2.71828182845904523536028747135266250
#define EXP_STEPEN_DOUBLE_MAX 709.7827
#define EXP_STEPEN_DOUBLE_MIN -708.3964
#define MAX_LONG_DOUBLE 1.79769313486231571e+308

long double s21_sin(double an);
long double s21_cos(double angle);
long double s21_tan(double angle);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
int s21_abs(int x);
long double s21_right_fmod(double x, double y);
long double s21_factorial(long long int num);
long double s21_pow(double base, double exp);
long double s21_exp(double x);
long double s21_sqrt(double x);
long double s21_fabs(double x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_log(double x);
long double s21_fmod(double x, double y);
#endif  // SRC_S21_MATH_H_
