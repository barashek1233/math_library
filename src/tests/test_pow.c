#include "test_math.h"

START_TEST(test_pow) {
  ck_assert_float_eq(s21_pow(5, 2), pow(5, 2));
  ck_assert_float_eq(s21_pow(-5, 2), pow(-5, 2));
  ck_assert_float_eq(s21_pow(0, 2), pow(0, 2));
  ck_assert_float_eq(s21_pow(0.5, 2), pow(0.5, 2));
  ck_assert_float_eq(s21_pow(-0.5, 2), pow(-0.5, 2));
}
END_TEST

Suite *suite_pow(void) {
  Suite *sut = suite_create("suite_pow");
  TCase *tc = tcase_create("pow_tc");
  tcase_add_test(tc, test_pow);
  suite_add_tcase(sut, tc);
  return sut;
}