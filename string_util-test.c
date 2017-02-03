/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "string_util-test.check" instead.
 */

#include <check.h>

#line 1 "string_util-test.check"
#include "stdlib.h"
#include "string_util.h"

START_TEST(str_replaceVIIII_to_IX)
{
#line 5
	ck_assert_str_eq(str_replace("DVIIII","VIIII","IX"), "DIX");

}
END_TEST

START_TEST(str_replaceCCCC_to_CD)
{
#line 8
	ck_assert_str_eq(str_replace("CCCC","CCCC","CD"), "CD");

}
END_TEST

START_TEST(str_replaceMLLXI_to_MCXI)
{
#line 11
	ck_assert_str_eq(str_replace("MLLXI","LL","C"), "MCXI");


}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, str_replaceVIIII_to_IX);
    tcase_add_test(tc1_1, str_replaceCCCC_to_CD);
    tcase_add_test(tc1_1, str_replaceMLLXI_to_MCXI);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}