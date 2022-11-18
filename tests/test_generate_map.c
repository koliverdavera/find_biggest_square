/*
** EPITECH PROJECT, 2022
** test_generate_map.c
** File description:
** generate map tests for bsq project
*/

#include "../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(bsq, test_1, .init = redirect_all_std)
{
    generate_bsq("10", "...ooo...");
    char *filepath = "tests/maps-generated/map1";
    char *expected = read_file_to_string(filepath);
    cr_assert_stdout_eq_str(expected);
}
