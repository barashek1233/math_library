#include "test_math.h"

START_TEST(test_s21_sin_positive) {
  double x = 0.5;
  double expected_result = sin(x);
  double result = s21_sin(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sin_negative) {
  double x = -0.5;
  double expected_result = sin(x);
  double result = s21_sin(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sin_zero) {
  double x = 0;
  double expected_result = sin(x);
  double result = s21_sin(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sin_pi) {
  double x = S21_PI;
  double expected_result = sin(x);
  double result = s21_sin(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sin_big_num) {
  double x = 10e10;
  double expected_result = sin(x);
  double result = s21_sin(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_sin_small_num) {
  double x = 10e-10;
  double expected_result = sin(x);
  double result = s21_sin(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

Suite* suite_sin(void) {
  Suite* s = suite_create("suite_sin");
  TCase* tc = tcase_create("sin_tc");

  tcase_add_test(tc, test_s21_sin_positive);
  tcase_add_test(tc, test_s21_sin_negative);
  tcase_add_test(tc, test_s21_sin_zero);
  tcase_add_test(tc, test_s21_sin_pi);
  tcase_add_test(tc, test_s21_sin_big_num);
  tcase_add_test(tc, test_s21_sin_small_num);

  suite_add_tcase(s, tc);
  return s;
}
