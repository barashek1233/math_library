#include "test_math.h"

int main(void) {
  int failed = 0;
  Suite *s21_math_test[] = {
      suite_abs(),  suite_acos(), suite_asin(), suite_atan(),
      suite_cos(),  suite_fabs(), suite_fmod(), suite_pow(),
      suite_sin(),  suite_sqrt(), suite_tan(),  suite_floor(),
      suite_ceil(), suite_exp(),  suite_log(),  NULL};
  for (int i = 0; s21_math_test[i] != NULL; i++) {
    SRunner *runner = srunner_create(s21_math_test[i]);
    srunner_set_fork_status(runner, CK_NOFORK);
    srunner_run_all(runner, CK_NORMAL);
    failed += srunner_ntests_failed(runner);
    srunner_free(runner);
  }
  return failed == 0 ? 1 : 0;
}
