/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
void my_putchar(char c);
int my_nbr_len(int nb);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
char *read_file_to_string(char const *filepath);
void display_map(char **map, int nb_rows, int nb_cols);

typedef struct my_map {
    char const *filepath;
    char const *content;
    int nb_rows;
    int nb_cols;
    char **map_init;
    char **map_result;
} my_map;

void show_result(my_map *map);
void show_map_object(my_map *map, int info, int map_init, int map_result);
my_map *init_map(char const *filepath);
char **get_map_init(my_map *map);
void free_map(my_map *map);

#endif /*MY_H*/
