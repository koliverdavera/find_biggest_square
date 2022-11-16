/*
** EPITECH PROJECT, 2022
** map_init.c
** File description:
** map structure methods for BSQ project
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../../include/my.h"

void scan_one_line_map_init(my_map *map, int i, int start)
{
    for (int j = 0; j < map->nb_cols; j++) {
        int position = start + i * (map->nb_cols + 1) + j;
        char symb = map->content[position];
        if (symb != 'o' && symb != '.') {
            my_putstr("Wrong symbols in map or lines have different size\n");
            exit(84);
        }
        map->map_result[i][j] = symb;
    }
}

char **get_map_init(my_map *map)
{
    int start = 1;
    while (map->content[start - 1] != '\n')
        start++;
    map->map_result = mem_alloc_2d_array(map->nb_rows, map->nb_cols);
    for (int i = 0; i < map->nb_rows; i++) {
        scan_one_line_map_init(map, i, start);
    }
    return map->map_result;
}

int parse(my_map *map)
{
    int rows = get_rows(map);
    if (rows == -1)
        return -1;
    get_cols(map);
    get_map_init(map);
    return 1;
}

my_map *init_map(char const *filepath)
{
    char *content = read_file_to_string(filepath);
    my_map *map = malloc(sizeof(my_map) * 1);
    map->filepath = filepath;
    map->content = content;
    parse(map);
    return map;
}
