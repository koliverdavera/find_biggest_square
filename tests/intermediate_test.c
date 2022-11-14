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

Test(bsq, test_100_100, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_100_100";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_187_187_empty, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_187_187_empty";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_187_187_filled, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_187_187_filled";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
/*
Test(bsq, test_1000_1000, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediatemouli_maps_solved/";
    char *filepath = "intermediate_map_1000_1000";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_1000_1000_2, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_1000_1000_2";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
*/
/*
Test(bsq, test_10000_10000, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_10000_10000";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
*/

Test(bsq, test_187_187_with_obstacles_25pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_187_187_with_obstacles_25pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_187_187_with_obstacles_50c, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_187_187_with_obstacles_50pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_187_187_with_obstacles_75c, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_187_187_with_obstacles_75pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
/*
Test(bsq, test_2000_2000, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_2000_2000";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
*/
Test(bsq, test_200_200, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_200_200";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_34_137_empty, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_34_137_empty";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_34_137_filled, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_34_137_filled";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_34_137_with_obstacles_25pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_34_137_with_obstacles_25pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_34_137_with_obstacles_50pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_34_137_with_obstacles_50pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_34_137_with_obstacles_75pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_34_137_with_obstacles_75pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
/*
Test(bsq, test_5000_5000, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_5000_5000";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
*/
/*
Test(bsq, test_500_500, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_500_500";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_500_500_2, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_500_500_2";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_500_500_3, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_500_500_3";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
*/
Test(bsq, test_97_21_empty, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_97_21_empty";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_97_21_filled, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_97_21_filled";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_97_21_with_obstacles_25pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_97_21_with_obstacles_25pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_97_21_with_obstacles_50pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_97_21_with_obstacles_50pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_97_21_with_obstacles_75pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_97_21_with_obstacles_75pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_empty_corners, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_empty_corners";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_map_filled_corners, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_filled_corners";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_column_with_obstacles_25pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_column_with_obstacles_25pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_column_with_obstacles_50pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_column_with_obstacles_50pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_column_with_obstacles_75pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_column_with_obstacles_75pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_empty_box, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_empty_box";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_empty_column, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_empty_column";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_empty_line, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_test_one_empty_line";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_filled_box, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_filled_box";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_filled_column, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_filled_column";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_filled_line, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_filled_line";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_line_with_obstacles_25pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_line_with_obstacles_25pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_line_with_obstacles_50pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_line_with_obstacles_50pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}

Test(bsq, test_one_line_with_obstacles_75pc, .init = redirect_all_std)
{
    char buffer_src[100] = "tests/maps-intermediate/mouli_maps/";
    char buffer_res[100] = "tests/maps-intermediate/mouli_maps_solved/";
    char *filepath = "intermediate_map_one_line_with_obstacles_75pc";
    bsq(strcat(buffer_src, filepath));
    char *expected = read_file_to_string(strcat(buffer_res, filepath));
    cr_assert_stdout_eq_str(expected);
}
