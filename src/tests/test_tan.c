#include "test_math.h"

START_TEST(test_s21_tan_positive) {
  double x = 0.5;
  double expected_result = tan(x);
  double result = s21_tan(x);
  ck_assert_double_le_tol(result, expected_result, 0.0001);
}
END_TEST

START_TEST(test_s21_tan_negative) {
  double x = -0.5;
  double expected_result = tan(x);
  double result = s21_tan(x);
  ck_assert_double_le_tol(result, expected_result, 0.0001);
}
END_TEST

START_TEST(test_s21_tan_zero) {
  double x = 0;
  double expected_result = tan(x);
  double result = s21_tan(x);
  ck_assert_double_le_tol(result, expected_result, 0.0001);
}
END_TEST

START_TEST(test_s21_tan_pi) {
  double x = S21_PI;
  double expected_result = tan(x);
  double result = s21_tan(x);
  ck_assert_double_le_tol(result, expected_result, 0.0001);
}
END_TEST

START_TEST(test_s21_tan_big_num) {
  double x = 10e10 / 3;
  double expected_result = tan(x);
  double result = s21_tan(x);
  ck_assert_double_le_tol(result, expected_result, 0.0001);
}
END_TEST

START_TEST(test_s21_tan_small_num) {
  double x = 10e-10;
  double expected_result = tan(x);
  double result = s21_tan(x);
  ck_assert_double_le_tol(result, expected_result, 0.0001);
}
END_TEST

Suite *suite_tan(void) {
  Suite *s = suite_create("suite_tan");
  TCase *tc = tcase_create("tan_tc");

  tcase_add_test(tc, test_s21_tan_positive);
  tcase_add_test(tc, test_s21_tan_negative);
  tcase_add_test(tc, test_s21_tan_zero);
  tcase_add_test(tc, test_s21_tan_pi);
  tcase_add_test(tc, test_s21_tan_big_num);
  tcase_add_test(tc, test_s21_tan_small_num);

  suite_add_tcase(s, tc);
  return s;
}
