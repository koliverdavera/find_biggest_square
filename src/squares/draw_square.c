/*
** EPITECH PROJECT, 2022
** draw_square.c
** File description:
** draw square for bsq project
*/

#include "../../include/my.h"

void draw_square(my_map *map)
{
    int row_end = map->max_row + map->max_square_size;
    int col_end = map->max_col + map->max_square_size;
    for (int i = map->max_row; i < row_end; i++) {
        for (int j = map->max_col; j < col_end; j++)
            map->init[i][j] = 'x';
    }
}
