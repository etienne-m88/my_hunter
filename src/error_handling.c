/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** error_handling
*/
#include "../include/my.h"

void error_handling(struct_t *all)
{
    if (!all->window)
        write(2, "Error\n", 6);
    if (!all->texture)
        write(2, "Error\n", 6);
    if (!all->sprite)
        write(2, "Error\n", 6);
    if (!all->button)
        write(2, "Error\n", 6);
    if (!all->bird)
        write(2, "Error\n", 6);
}
