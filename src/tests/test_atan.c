#include "test_math.h"
START_TEST(s21_atan_minus2) {
  double a = -2.0;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_minus1) {
  double a = -1.0;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_minus0dot5) {
  double a = -0.5;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_minuszero) {
  double a = -0.0;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_zero) {
  double a = 0.0;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_min) {
  double a = DBL_MIN;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_0dot5) {
  double a = 0.5;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_1) {
  double a = 1.0;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_2) {
  double a = 2.0;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_1dot5) {
  double a = 1.5;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

START_TEST(s21_atan_minus1dot5) {
  double a = -1.5;
  ck_assert_double_le_tol(s21_atan(a), atan(a), 0.000001);
}
END_TEST

Suite *suite_atan(void) {
  Suite *sut = suite_create("suite_atan");
  TCase *tc = tcase_create("atan_tc");

  tcase_add_test(tc, s21_atan_minus2);
  tcase_add_test(tc, s21_atan_minus1);
  tcase_add_test(tc, s21_atan_minus0dot5);
  tcase_add_test(tc, s21_atan_minuszero);
  tcase_add_test(tc, s21_atan_zero);
  tcase_add_test(tc, s21_atan_min);
  tcase_add_test(tc, s21_atan_0dot5);
  tcase_add_test(tc, s21_atan_1);
  tcase_add_test(tc, s21_atan_2);
  tcase_add_test(tc, s21_atan_1dot5);
  tcase_add_test(tc, s21_atan_minus1dot5);
  suite_add_tcase(sut, tc);
  return sut;
}