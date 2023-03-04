#include "test_math.h"
START_TEST(s21_asin_minus09) {
  double a = -0.9;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_minus05) {
  double a = -0.5;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_minuszero) {
  double a = -0.0;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_zero) {
  double a = 0.0;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_min) {
  double a = DBL_MIN;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_05) {
  double a = 0.5;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_1) {
  double a = 1.0;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_09) {
  double a = 0.9;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

START_TEST(s21_asin_max) {
  double a = DBL_MAX;
  ck_assert_double_nan(s21_asin(a));
}
END_TEST

START_TEST(s21_asin_minus1) {
  double a = -1.0;
  ck_assert_double_le_tol(s21_asin(a), asin(a), 0.000001);
}
END_TEST

Suite *suite_asin(void) {
  Suite *sut = suite_create("suite_asin");
  TCase *tc = tcase_create("asin_tc");

  tcase_add_test(tc, s21_asin_minus09);
  tcase_add_test(tc, s21_asin_minus1);
  tcase_add_test(tc, s21_asin_minus05);
  tcase_add_test(tc, s21_asin_minuszero);
  tcase_add_test(tc, s21_asin_zero);
  tcase_add_test(tc, s21_asin_min);
  tcase_add_test(tc, s21_asin_05);
  tcase_add_test(tc, s21_asin_1);
  tcase_add_test(tc, s21_asin_09);
  tcase_add_test(tc, s21_asin_max);
  tcase_add_test(tc, s21_asin_minus1);
  suite_add_tcase(sut, tc);
  return sut;
}