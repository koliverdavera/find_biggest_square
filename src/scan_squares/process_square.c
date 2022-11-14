/*
** EPITECH PROJECT, 2022
** process_map.c
** File description:
** process map for bsq project
** scan the whole map and draw the biggest square
*/

#include "../../include/my.h"

void scan_map_line(my_map *map, int i)
{
    for (int j = 0; j < map->nb_cols; j++) {
        int check = is_square_of_size(map, i, j, map->max_square_size);
        if (check == 1) {
            find_new_biggest_square(map, i, j);
        }
    }
}

int scan_map(my_map *map)
{
    map->max_square_size = 0;
    for (int i = 0; i < map->nb_rows; i++) {
        scan_map_line(map, i);
    }
    return map->max_square_size;
}

void draw_square(my_map *map)
{
    int end_row = map->max_row + map->max_square_size;
    int end_col = map->max_col + map->max_square_size;
    for (int i = map->max_row; i < end_row; i++) {
        for (int j = map->max_col; j < end_col; j++)
            map->map_result[i][j] = 'x';
    }
}

int process_map(my_map *map)
{
    scan_map(map);
    draw_square(map);
    return map->max_square_size;
}
