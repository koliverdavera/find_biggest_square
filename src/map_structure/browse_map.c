/*
** EPITECH PROJECT, 2022
** browse_map.c
** File description:
** browse map and count obstacles for bsq
*/

#include "../../include/my.h"

int check_o(my_map *map, int i, int j)
{
    if (map->init[i][j] == 'o')
        return 1;
    return 0;
}

void count(my_map *map, int i, int j)
{
    int ab = 0;
    int ac = 0;
    int a = 0;
    int d = check_o(map, i, j);
    if (i > 0)
        ab = map->result[i - 1][j];
    if (j > 0)
        ac = map->result[i][j - 1];
    if (i > 0 && j > 0)
        a = map->result[i - 1][j - 1];
    int abcd = ac + ab - a + d;
    map->result[i][j] = abcd;
}

void browse(my_map *map)
{
    map->result = mem_alloc_2d_arr_int(map->nb_rows, map->nb_cols);
    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++)
            count(map, i, j);
    }
    scan_map(map);
    draw_square(map);
}
