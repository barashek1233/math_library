#include "test_math.h"
START_TEST(test_zero) { ck_assert_ldouble_eq(ceil(0), s21_ceil(0)); }
END_TEST

START_TEST(test_neg) { ck_assert_ldouble_eq(ceil(-1234), s21_ceil(-1234)); }
END_TEST

START_TEST(test_pos) { ck_assert_ldouble_eq(ceil(1234), s21_ceil(1234)); }
END_TEST

START_TEST(test_pos_1) { ck_assert_ldouble_eq(ceil(1), s21_ceil(1)); }
END_TEST

START_TEST(test_normal) { ck_assert_ldouble_eq(ceil(1.7), s21_ceil(1.7)); }
END_TEST

START_TEST(test_normal_negative) {
  ck_assert_int_eq(ceil(-1.7), s21_ceil(-1.7));
}
END_TEST

START_TEST(test_positive_inf) {
  ck_assert_ldouble_eq(ceil(S21_INF), s21_ceil(S21_INF));
}
END_TEST
START_TEST(test_nan) {
  double test = NAN;
  long double res1 = s21_ceil(test);
  long double res2 = ceil(test);
  ck_assert_ldouble_nan(res1);
  ck_assert_ldouble_nan(res2);
}
END_TEST

START_TEST(ceil_pos_inf_test) {
  double test = INFINITY;
  long double res1 = s21_ceil(test);
  long double res2 = ceil(test);

  ck_assert_ldouble_infinite(res1);
  ck_assert_ldouble_infinite(res2);
}
END_TEST

START_TEST(ceil_neg_inf_test) {
  double test = -INFINITY;
  long double res1 = s21_ceil(test);
  long double res2 = ceil(test);

  ck_assert_ldouble_infinite(res1);
  ck_assert_ldouble_infinite(res2);
}
END_TEST

START_TEST(ceil_pos_loop_test) {
  for (double test = 1.1293; test <= 1000.0; test += 10.0452525235) {
    long double res1 = s21_ceil(test);
    long double res2 = ceil(test);
    ck_assert_ldouble_eq_tol(res1, res2, EPS_FOR_TEST);
  }
}
END_TEST

START_TEST(ceil_neg_loop_test) {
  for (double test = -1000.013; test <= -1.0; test += 10.0452525235) {
    long double res1 = s21_ceil(test);
    long double res2 = ceil(test);
    ck_assert_ldouble_eq_tol(res1, res2, EPS_FOR_TEST);
  }
}
Suite* suite_ceil(void) {
  Suite* s = suite_create("ceil");
  TCase* tc = tcase_create("ceil_tc");

  tcase_add_test(tc, test_zero);
  tcase_add_test(tc, test_neg);
  tcase_add_test(tc, test_pos);
  tcase_add_test(tc, test_pos_1);
  tcase_add_test(tc, test_normal);
  tcase_add_test(tc, test_normal_negative);
  tcase_add_test(tc, test_positive_inf);
  tcase_add_test(tc, test_nan);
  tcase_add_test(tc, ceil_pos_inf_test);
  tcase_add_test(tc, ceil_pos_inf_test);
  tcase_add_test(tc, ceil_pos_loop_test);
  tcase_add_test(tc, ceil_neg_loop_test);
  tcase_add_test(tc, ceil_neg_inf_test);

  suite_add_tcase(s, tc);
  return s;
}