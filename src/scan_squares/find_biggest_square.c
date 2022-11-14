/*
** EPITECH PROJECT, 2022
** find_new_bigget_square_at_position.c
** File description:
** bsq project
*/

#include "../../include/my.h"
#include <stdio.h>

int find_new_biggest_square(my_map *map, int row, int col)
{
    int flag = 0;
    while (is_square_of_size(map, row, col, map->max_square_size + 1) == 1) {
        map->max_square_size = map->max_square_size + 1;
        flag = 1;
    }
    if (flag == 1) {
        map->max_row = row;
        map->max_col = col;
    }
    return map->max_square_size;
}

/*
int find_biggest_square(my_map *map, int row, int col)
{
    int max_size = 0;
    while (is_square_of_size(map,row, col, max_size) == 1)
        max_size++;
    return max_size - 1;
}
*/
