#include "test_math.h"

START_TEST(test_s21_fabs_positive) {
  double x = 0.5;
  double expected_result = fabs(x);
  double result = s21_fabs(x);
  ck_assert_double_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_fabs_negative) {
  double x = -0.5;
  double expected_result = fabs(x);
  double result = s21_fabs(x);
  ck_assert_double_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_fabs_zero) {
  double x = 0;
  double expected_result = fabs(x);
  double result = s21_fabs(x);
  ck_assert_double_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_fabs_big_num) {
  double x = 10e10;
  double expected_result = fabs(x);
  double result = s21_fabs(x);
  ck_assert_double_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_fabs_small_num) {
  double x = 10e-10;
  double expected_result = fabs(x);
  double result = s21_fabs(x);
  ck_assert_double_eq(result, expected_result);
}
END_TEST

Suite *suite_fabs(void) {
  Suite *s = suite_create("suite_fabs");
  TCase *tc = tcase_create("fabs_tc");

  tcase_add_test(tc, test_s21_fabs_positive);
  tcase_add_test(tc, test_s21_fabs_negative);
  tcase_add_test(tc, test_s21_fabs_zero);
  tcase_add_test(tc, test_s21_fabs_big_num);
  tcase_add_test(tc, test_s21_fabs_small_num);

  suite_add_tcase(s, tc);
  return s;
}
