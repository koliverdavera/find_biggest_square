/*
** EPITECH PROJECT, 2022
** generate_bsq.c
** File description:
** generate map for bsq project
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../../include/my.h"
#include <stdlib.h>
#include <string.h>

void update_pattern_counter(my_map *map, int *pattern_counter)
{
    if (*pattern_counter == strlen(map->pattern) - 1)
        *pattern_counter = 0;
    else
        *pattern_counter = *pattern_counter + 1;
}

void generate_map_content(my_map *map, char *size_str)
{
    int size = map->nb_cols * (map->nb_rows + 1);
    int start = strlen(size_str) + 1;
    int pointer_value = 0;
    int *pattern_counter = &pointer_value;
    int i = start;
    while ((i - start) != size) {
        if ((i - start) % (map->nb_cols + 1) == map->nb_cols) {
            map->content[i] = '\n';
        }  else {
            map->content[i] = map->pattern[*pattern_counter];
            update_pattern_counter(map, pattern_counter);
        }
        i++;
    }
    map->content[i] = '\0';
}

void check_pattern(my_map *map)
{
    for (int i = 0; i < strlen(map->pattern); i++) {
        if (map->pattern[i] != 'o' && map->pattern[i] != '.') {
            my_putstr("Map pattern contains wrong symbols (not . or o)\n");
            exit(84);
        }
    }
}

char *generate_content(my_map *map, char *size_str)
{
    check_pattern(map);
    int size = strlen(size_str) + 1 + (map->nb_cols * (map->nb_rows + 1));
    map->content = malloc(sizeof(char) * size + 1);
    int i = 0;
    while (size_str[i] != '\0') {
        map->content[i] = size_str[i];
        i++;
    }
    map->content[i] = '\n';
    generate_map_content(map, size_str);
    return map->content;;
}

my_map *generate_map_init(char *size_str, char *pattern)
{
    my_map *map = malloc(sizeof(my_map));
    map->pattern = pattern;
    map->nb_rows = string_to_int(size_str);
    map->nb_cols = string_to_int(size_str);
    generate_content(map, size_str);
    parse(map);
    return map;
}
