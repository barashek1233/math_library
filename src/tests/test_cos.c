#include "test_math.h"

START_TEST(test_s21_cos_positive) {
  double x = 0.5;
  double expected_result = cos(x);
  double result = s21_cos(x);
  ck_assert_double_le_tol(result, expected_result, 0.000001);
}
END_TEST

START_TEST(test_s21_cos_negative) {
  double x = -0.5;
  double expected_result = cos(x);
  double result = s21_cos(x);
  ck_assert_double_le_tol(result, expected_result, 0.000001);
}
END_TEST

START_TEST(test_s21_cos_zero) {
  double x = 0;
  double expected_result = cos(x);
  double result = s21_cos(x);
  ck_assert_double_le_tol(result, expected_result, 0.000001);
}
END_TEST

START_TEST(test_s21_cos_pi) {
  double x = S21_PI;
  double expected_result = cos(x);
  double result = s21_cos(x);
  ck_assert_double_le_tol(result, expected_result, 0.000001);
}
END_TEST

START_TEST(test_s21_cos_big_num) {
  double x = 10e10;
  long double expected_result = cos(x);
  long double result = s21_cos(x);
  ck_assert_ldouble_le_tol(result, expected_result, 0.000001);
}
END_TEST

START_TEST(test_s21_cos_small_num) {
  double x = 10e-10;
  double expected_result = cos(x);
  double result = s21_cos(x);
  ck_assert_double_le_tol(result, expected_result, 0.000001);
}
END_TEST

Suite* suite_cos(void) {
  Suite* s = suite_create("suite_cos");
  TCase* tc = tcase_create("cos_tc");

  tcase_add_test(tc, test_s21_cos_positive);
  tcase_add_test(tc, test_s21_cos_negative);
  tcase_add_test(tc, test_s21_cos_zero);
  tcase_add_test(tc, test_s21_cos_pi);
  tcase_add_test(tc, test_s21_cos_big_num);
  tcase_add_test(tc, test_s21_cos_small_num);

  suite_add_tcase(s, tc);
  return s;
}
