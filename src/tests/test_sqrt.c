#include "test_math.h"

START_TEST(test_s21_sqrt_positive) {
  double x = 0.5;
  double expected_result = sqrt(x);
  double result = s21_sqrt(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sqrt_negative) {
  double expected_result = sqrt(-0.5);
  double result = s21_sqrt(-0.5);
  ck_assert(isnan(expected_result));
  ck_assert(isnan(result));
}
END_TEST

START_TEST(test_s21_sqrt_zero) {
  double x = 0;
  double expected_result = sqrt(x);
  double result = s21_sqrt(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sqrt_big_num) {
  long double x = 10e10;
  double expected_result = sqrt(x);
  double result = s21_sqrt(x);
  ck_assert_int_eq((int)result, (int)expected_result);
}
END_TEST

START_TEST(test_s21_sqrt_small_num) {
  double x = 10e-10;
  double expected_result = sqrt(x);
  double result = s21_sqrt(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

Suite *suite_sqrt(void) {
  Suite *s = suite_create("suite_sqrt");
  TCase *tc = tcase_create("sqrt_tc");

  tcase_add_test(tc, test_s21_sqrt_positive);
  tcase_add_test(tc, test_s21_sqrt_negative);
  tcase_add_test(tc, test_s21_sqrt_zero);
  tcase_add_test(tc, test_s21_sqrt_big_num);
  tcase_add_test(tc, test_s21_sqrt_small_num);

  suite_add_tcase(s, tc);
  return s;
}
