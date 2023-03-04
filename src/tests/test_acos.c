#include "test_math.h"

START_TEST(s21_acos_minus09) {
  double a = -0.9;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_minus05) {
  double a = -0.5;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_minuszero) {
  double a = -0.0;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_zero) {
  double a = 0;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_min) {
  double a = DBL_MIN;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_05) {
  double a = 0.5;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_09) {
  double a = 0.9;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_max) {
  double a = DBL_MAX;
  ck_assert_double_nan(s21_acos(a));
}
END_TEST

START_TEST(s21_acos_minus1) {
  double a = -1.0;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

START_TEST(s21_acos_1) {
  double a = 1.0;
  ck_assert_double_le_tol(s21_acos(a), acos(a), 0.00001);
}
END_TEST

Suite *suite_acos(void) {
  Suite *sut = suite_create("suite_acos");
  TCase *tc = tcase_create("acos_tc");
  tcase_add_test(tc, s21_acos_minus05);
  tcase_add_test(tc, s21_acos_minuszero);
  tcase_add_test(tc, s21_acos_zero);
  tcase_add_test(tc, s21_acos_05);
  tcase_add_test(tc, s21_acos_09);
  tcase_add_test(tc, s21_acos_minus1);
  tcase_add_test(tc, s21_acos_minus09);
  tcase_add_test(tc, s21_acos_min);
  tcase_add_test(tc, s21_acos_max);
  tcase_add_test(tc, s21_acos_1);
  suite_add_tcase(sut, tc);
  return sut;
}

// ck_assert_infinty