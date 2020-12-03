#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <cquizgame.h>
#define PROJECT_NAME "CQUIZGAME"

/* Prototypes for all the test functions */
void test_show_record(void);
void test_reset_score();

void test_help();

void test_edit_score(float score, char plnm[20]);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(CQUIZGAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "cquizgame",  test_show_record);
  CU_add_test(suite, "cquizgame",  test_reset_score);
  CU_add_test(suite, "cquizgame",  test_help);
  CU_add_test(suite, "cquizgame",  test_edit_score);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_show_record(void) {
  CU_ASSERT_EQUAL(1,show_record());

  /* Dummy fail*/
}

void test_reset_score(void) {
  CU_ASSERT_EQUAL(1,reset_score());

  /* Dummy fail*/
}
void test_help(void) {
  CU_ASSERT_EQUAL(1,help());

  /* Dummy fail*/
}
void test_edit_score(void) {
  CU_ASSERT_EQUAL(1,edit_score("score"));

  /* Dummy fail*/
}
