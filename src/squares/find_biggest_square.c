/*
** EPITECH PROJECT, 2022
** find_biggest_square.c
** File description:
** find biggest square for bsq project
*/

#include "../../include/my.h"

void check_square(my_map *map, int i, int j)
{
    int s = map->max_square_size;
    if ((i + s) >= map->nb_rows || (j + s) >= map->nb_cols)
        return;
    int a = 0;
    int ab = 0;
    int ac = 0;
    int abcd = map->result[i + s][j + s];
    if (i > 0)
        ab = map->result[i - 1][j + s];
    if (j > 0)
        ac = map->result[i + s][j - 1];
    if (i > 0 && j > 0)
        a = map->result[i - 1][j - 1];
    int d = abcd - ac - ab + a;
    if (d == 0) {
        map->max_square_size = s + 1;
        map->max_row = i;
        map->max_col = j;
        check_square(map, i, j);
    }
}

void scan_map(my_map *map)
{
    map->max_square_size = 0;
    map->max_row = 0;
    map->max_col = 0;
    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++)
            check_square(map, i, j);
    }
}
