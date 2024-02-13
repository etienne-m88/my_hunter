/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** main
*/
#include "../include/my.h"

static void print_help(void)
{
    my_printf("he player is a hunter who shoots ducks.");
    my_printf("ducks must appear on the screen ");
    my_printf("and move from one side to another.");
    my_printf("the player can click on them to shoot them.\n");
}

int main(int ac, char **av)
{
    struct_t *all = malloc(sizeof(struct_t));

    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        print_help();
        return (0);
    }
    open_window(all);
    click(all);
    error_handling(all);
    free(all);
    return (0);
}
