/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header file for bsq
*/

#ifndef MY_H_
    #define MY_H_

typedef struct my_map {
    char const *filepath;
    char const *pattern;
    char *content;
    int nb_rows;
    int nb_cols;
    int max_row;
    int max_col;
    int max_square_size;
    char **init;
    int **result;
} my_map;

char **mem_alloc_2d_arr_char(int nb_rows, int nb_cols);
int **mem_alloc_2d_arr_int(int nb_rows, int nb_cols);
void my_putchar(char c);
int my_put_nbr(long long int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int string_to_int(char *line);
char *read_file_to_string(char const *filepath);
char *generate_content(my_map *map, char *size_str);
int get_rows(my_map *map);
int get_cols(my_map *map);
void display_map_chars(my_map *map);
void display_map_int(my_map *map);
void free_map(my_map *map);

int bsq_from_file(char *filepath);
int bsq_generate(char *size, char *pattern);

my_map *init_map_from_file(char const *filepath);
my_map *map_generate_init(char *size, char *pattern);
int parse(my_map *map);
void scan_map(my_map *map);
void draw_square(my_map *map);
void browse(my_map *map);

void redirect_all_std(void);

#endif /*MY_H*/
