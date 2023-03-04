#include "test_math.h"

START_TEST(test_exp) {
  ck_assert_float_eq(s21_exp(5.0), exp(5.0));
  ck_assert_float_eq(s21_exp(1000.0), exp(1000.0));
  ck_assert_float_eq(s21_exp(-5.0), exp(-5.0));
  ck_assert_float_eq(s21_exp(0), exp(0));
  ck_assert_float_eq(s21_exp(0.5), exp(0.5));
  ck_assert_float_eq(s21_exp(-0.5), exp(-0.5));
}
END_TEST

Suite* suite_exp(void) {
  Suite* s = suite_create("suite_exp");
  TCase* tc = tcase_create("exp_tc");

  tcase_add_test(tc, test_exp);

  suite_add_tcase(s, tc);
  return s;
}
