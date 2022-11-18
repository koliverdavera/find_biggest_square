/*
** EPITECH PROJECT, 2022
** intermediate_test.c
** File description:
** Tests for bsq
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <string.h>
#include <stdio.h>

void redirect_all_std(void);
/*
#define cr_assert_stdout_eq(RefFile, FormatString, ...)    internal
*/
/**
 * Passes if the contents of \c stdout are equal to the contents of \c RefFile
 *
 * Passes if the contents of \c stdout are equal to the contents of \c RefFile.
 * Otherwise the test is marked as failure but the execution will continue.
 *
 * The optional string is printed on failure.
 *
 * @param[in] (FILE *) RefFile Pointer to a FILE object that specifies an input stream
 * @param[in] FormatString (optional) printf-like format string
 * @param[in] ... (optional) format string parameters
 *
 *****************************************************************************/

Test(bsq, test_10000_10000, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_10000_10000";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_100_100, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_100_100";
    bsq(strcat(buffer_src, filepath));
    //char *expected = read_file_to_string(strcat(buffer_res, filepath));
    FILE *expected = fopen(strcat(buffer_res, filepath), "rb");
    cr_assert_stdout_eq(expected);
}

