#include "test_math.h"

START_TEST(test_s21_floor_positive) {
  double x = 0.5;
  double expected_result = floor(x);
  double result = s21_floor(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_floor_negative) {
  double x = -0.5;
  double expected_result = floor(x);
  double result = s21_floor(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_floor_zero) {
  double x = 0;
  double expected_result = floor(x);
  double result = s21_floor(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_floor_pi) {
  double x = S21_PI;
  double expected_result = floor(x);
  double result = s21_floor(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_floor_big_num) {
  double x = 10e10;
  double expected_result = floor(x);
  double result = s21_floor(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_floor_small_num) {
  double x = 10e-10;
  double expected_result = floor(x);
  double result = s21_floor(x);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

Suite* suite_floor(void) {
  Suite* s = suite_create("floor");
  TCase* tc = tcase_create("floor_tc");

  tcase_add_test(tc, test_s21_floor_positive);
  tcase_add_test(tc, test_s21_floor_negative);
  tcase_add_test(tc, test_s21_floor_zero);
  tcase_add_test(tc, test_s21_floor_pi);
  tcase_add_test(tc, test_s21_floor_big_num);
  tcase_add_test(tc, test_s21_floor_small_num);

  suite_add_tcase(s, tc);
  return s;
}
