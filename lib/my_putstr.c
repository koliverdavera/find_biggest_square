/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Print string
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        my_putchar(str[counter]);
        counter++;
    }
    return counter;
}
