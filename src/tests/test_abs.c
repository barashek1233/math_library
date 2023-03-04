#include "test_math.h"

START_TEST(test_s21_abs_positive) {
  int result = s21_abs(5);
  int expected_result = abs(5);
  ck_assert_int_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_abs_negative) {
  int result = s21_abs(-5);
  int expected_result = abs(-5);
  ck_assert_int_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_abs_zero) {
  int result = s21_abs(0);
  int expected_result = abs(0);
  ck_assert_int_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_abs_max_int) {
  int result = s21_abs(INT_MAX);
  int expected_result = abs(INT_MAX);
  ck_assert_int_eq(result, expected_result);
}
END_TEST

START_TEST(test_s21_abs_min_int) {
  int result = s21_abs(INT_MIN);
  int expected_result = abs(INT_MIN);
  ck_assert_int_eq(result, expected_result);
}
END_TEST

Suite *suite_abs(void) {
  Suite *s = suite_create("suite_abs");
  TCase *tc = tcase_create("abs_tc");

  tcase_add_test(tc, test_s21_abs_positive);
  tcase_add_test(tc, test_s21_abs_negative);
  tcase_add_test(tc, test_s21_abs_zero);
  tcase_add_test(tc, test_s21_abs_max_int);
  tcase_add_test(tc, test_s21_abs_min_int);

  suite_add_tcase(s, tc);
  return s;
}
