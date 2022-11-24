/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main for bsq project
*/

#include "../include/my.h"

int main(int ac, char *args[])
{
    if (ac == 2)
        return bsq_from_file(args[1]);
    if (ac == 3)
        return bsq_generate(args[1], args[2]);
    my_putstr("Wrong main parameters\n");
    return 84;
}
