/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
void my_putchar(char c);
int my_put_nbr(long long int nb);
int my_nbr_len(int nb);
int string_to_int(char *line);
int my_strlen(char const *str);
int my_putstr(char const *str);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
char *read_file_to_string(char const *filepath);
void display_map(char **map, int nb_rows, int nb_cols);

typedef struct my_map {
    char const *filepath;
    char const *pattern;
    char *content;
    int nb_rows;
    int nb_cols;
    int max_row;
    int max_col;
    int max_square_size;
    char **map_result;
} my_map;

void show_result(my_map *map);
void show_map_object(my_map *map, int info, int map_init, int map_result);
my_map *init_map(char const *filepath);
char **get_map_init(my_map *map);
void free_map(my_map *map);

int is_square_of_size(my_map *map, int row, int col, int square_size);
int find_new_biggest_square(my_map *map, int row, int col);
int scan_map(my_map *map);
void draw_square(my_map *map);
int process_map(my_map *map);
int parse(my_map *map);
int get_rows(my_map *map);
int get_cols(my_map *map);
int bsq(char *filepath);
void redirect_all_std(void);
int generate_bsq(char *size_str, char *pattern);
my_map *generate_map_init(char *size_str, char *pattern);

#endif /*MY_H*/
