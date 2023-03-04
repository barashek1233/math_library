#ifndef SRC_TESTS_TEST_MATH_H_
#define SRC_TESTS_TEST_MATH_H_

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

#include "../s21_math.h"

#define EPS_FOR_TEST 1e-6
Suite *suite_abs(void);
Suite *suite_acos(void);
Suite *suite_asin(void);
Suite *suite_atan(void);
Suite *suite_ceil(void);
Suite *suite_cos(void);
Suite *suite_exp(void);
Suite *suite_fabs(void);
Suite *suite_floor(void);
Suite *suite_fmod(void);
Suite *suite_log(void);
Suite *suite_pow(void);
Suite *suite_sin(void);
Suite *suite_sqrt(void);
Suite *suite_tan(void);
Suite *suite_floor(void);
Suite *suite_ceil(void);
Suite *suite_exp(void);
Suite *suite_log(void);

#endif  // SRC_TESTS_TEST_MATH_H_