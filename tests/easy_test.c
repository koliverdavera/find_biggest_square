/*
** EPITECH PROJECT, 2022
** easy_test.c
** File description:
** Tests for bsq
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <string.h>
#include <stdio.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(bsq, test_normal, .init = redirect_all_std)
{
    char *filepath_result = "tests/maps-easy/mouli_maps_solved/map_normal";
    char *filepath_src = "tests/maps-easy/mouli_maps/map_normal";
    bsq("tests/maps-easy/mouli_maps/map_normal");
    char *expected = read_file_to_string(filepath_result);
    cr_assert_stdout_eq_str(expected);
}
