/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** button
*/
#include "../include/my.h"

void display_button(struct_t *all)
{
    all->texture02 = sfTexture_createFromFile("./image/button.png", NULL);
    all->button = sfSprite_create();
    sfSprite_setTexture(all->button, all->texture02, sfTrue);
    sfSprite_setScale(all->button, (sfVector2f) {1, 1});
    sfSprite_setPosition(all->button, (sfVector2f) {700, 200});
    sfRenderWindow_drawSprite(all->window, all->button, NULL);
    click(all);
}

void click(struct_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);

    if (mouse.x >= 803 && mouse.x <= 1099) {
        if (mouse.y >= 409 && mouse.y <= 489) {
            loop_condition2(all);
        }
    }
}

void loop_condition2(struct_t *all)
{
    if (all->event.type == sfEvtMouseButtonPressed) {
        open_window2(all);
    }
}
