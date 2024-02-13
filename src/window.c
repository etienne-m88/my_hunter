/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** window
*/
#include "../include/my.h"

void open_window(struct_t *all)
{
    all->mode.bitsPerPixel = 32;
    all->mode.height = 1080;
    all->mode.width = 1920;
    all->sprite = sfSprite_create();
    TEXTURE = sfTexture_createFromFile("./image/epitech.jpg", NULL);
    sfSprite_setTexture(all->sprite, all->texture, sfTrue);
    sfSprite_setScale(all->sprite, (sfVector2f) {2, 2.5});
    WINDOW = sfRenderWindow_create(all->mode, "lol", sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            loop_condition(all);
        }
        sfRenderWindow_clear(all->window, sfWhite);
        sfRenderWindow_drawSprite(all->window, all->sprite, NULL);
        display_button(all);
        sfRenderWindow_display(all->window);
    }
}

void open_window2(struct_t *all)
{
    TEXTURE = sfTexture_createFromFile("./image/epitech.jpg", NULL);
    all->sprite = sfSprite_create();
    sfSprite_setTexture(all->sprite, all->texture, sfTrue);
    sfSprite_setScale(all->sprite, (sfVector2f) {2, 2.5});
    while (sfRenderWindow_isOpen(all->window)) {
        while (sfRenderWindow_pollEvent(all->window, &all->event)) {
            loop_condition(all);
            click_bird(all);
        }
        sfRenderWindow_clear(all->window, sfWhite);
        sfRenderWindow_drawSprite(all->window, all->sprite, NULL);
        display_bird(all);
        sfRenderWindow_display(all->window);
    }
}

void loop_condition(struct_t *all)
{
    if (all->event.type == sfEvtClosed) {
        sfRenderWindow_close(all->window);
    }
}
