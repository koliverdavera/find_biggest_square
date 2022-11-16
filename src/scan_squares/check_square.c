/*
** EPITECH PROJECT, 2022
** check_square_at_position.c
** File description:
** check if there is a square bsq
*/

#include "../../include/my.h"

int is_square_of_size_scan_line(my_map *map, int i, int col, int end_col)
{
    for (int j = col; j < end_col; j++) {
        if (map->map_result[i][j] == 'o')
            return 0;
    }
    return 1;
}

int is_square_of_size(my_map *map, int row, int col, int square_size)
{
    int end_row = row + square_size;
    int end_col = col + square_size;
    if (end_row > map->nb_rows || end_col > map->nb_cols)
        return 0;
    for (int i = row; i < end_row; i++) {
        int check_line = is_square_of_size_scan_line(map, i, col, end_col);
        if (check_line == 0)
            return check_line;
    }
    return 1;
}
