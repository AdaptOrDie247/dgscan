#include "../../vendor/Unity/src/unity.h"
#include "../../include/banner.h"
#include "../../include/program.h"
#include <stdlib.h>

static dgscan_banner* banner;
static dgscan_program* dgscan;

void setUp(void) {
  dgscan = dgscan_program_new();
  dgscan_program_set_author(dgscan, "Daniel Gilbert");
  dgscan_program_set_name(dgscan, "DG Scan");
  dgscan_program_set_version(dgscan, "1.0");
  banner = dgscan_banner_new(dgscan);
}

void tearDown(void) {
  dgscan_banner_free(banner);
  dgscan_program_free(dgscan);
}

void test_dgscan_banner_get_string(void) {
  char* exp = "\nDG Scan\nVersion: 1.0\nAuthor: Daniel Gilbert\n\n";
  char* act = dgscan_banner_get_string(banner);
  TEST_ASSERT_EQUAL_STRING(exp, act);
  free(act);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_dgscan_banner_get_string);
  return UNITY_END();
}
