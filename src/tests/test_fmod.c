#include "test_math.h"

START_TEST(test_s21_fmod_positive) {
  long double x = 2.0;
  long double y = 1.0;
  long double expected_result = fmod(x, y);
  long double result = s21_fmod(x, y);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_fmod_negative) {
  long double x = -2.0;
  long double y = 1.0;
  long double expected_result = fmod(x, y);
  long double result = s21_fmod(x, y);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_fmod_zero) {
  long double expected_result = fmod(2.0, 0);
  long double result = s21_fmod(2.0, 0);
  ck_assert(isnan(expected_result));
  ck_assert(isnan(result));
}
END_TEST

START_TEST(test_s21_fmod_big_num) {
  long double x = 1e15;
  long double y = 2.0;
  long double expected_result = fmod(x, y);
  long double result = s21_fmod(x, y);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_fmod_small_num) {
  long double x = 1e-15;
  long double y = 2.0;
  long double expected_result = fmod(x, y);
  long double result = s21_fmod(x, y);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST

START_TEST(test_s21_fmod_test1) {
  long double x = S21_INF;
  long double y = 1;
  long double result = s21_fmod(x, y);
  ck_assert_ldouble_nan(result);
}
END_TEST
START_TEST(test_s21_fmod_test) {
  long double x = 1;
  long double y = S21_INF;
  long double expected_result = fmod(x, y);
  long double result = s21_fmod(x, y);
  ck_assert_double_le_tol(result, expected_result, 0.00001);
}
END_TEST
START_TEST(test_s21_fmod_newtest) {
  ck_assert_float_eq(s21_fmod(5.0, 6.0), fmod(5.0, 6.0));
  ck_assert_float_eq(s21_fmod(-5.0, -6.0), fmod(-5.0, -6.0));
  ck_assert_int_eq(s21_fmod(0.0, 0.0), fmod(0.0, 0.0));
  ck_assert_float_eq(s21_fmod(-5.0, 6.0), fmod(-5.0, 6.0));
  ck_assert_float_eq(s21_fmod(5.12, 6.03), fmod(5.12, 6.03));
  ck_assert_float_eq(s21_fmod(12.0, 11.0), fmod(12.0, 11.0));
  ck_assert_float_eq(s21_fmod(-5.0, 6.0), fmod(-5.0, 6.0));
}
END_TEST

Suite *suite_fmod(void) {
  Suite *s = suite_create("suite_fmod");
  TCase *tc = tcase_create("fmod_tc");

  tcase_add_test(tc, test_s21_fmod_positive);
  tcase_add_test(tc, test_s21_fmod_negative);
  tcase_add_test(tc, test_s21_fmod_zero);
  tcase_add_test(tc, test_s21_fmod_big_num);
  tcase_add_test(tc, test_s21_fmod_small_num);
  tcase_add_test(tc, test_s21_fmod_test);
  tcase_add_test(tc, test_s21_fmod_test1);
  tcase_add_test(tc, test_s21_fmod_newtest);

  suite_add_tcase(s, tc);
  return s;
}
