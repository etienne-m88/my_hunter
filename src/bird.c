/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** bird
*/
#include "../include/my.h"

void display_bird(struct_t *all)
{
    all->bird_x = all->bird_x + 2;
    all->texture03 = sfTexture_createFromFile("./image/pigeon.png", NULL);
    all->bird = sfSprite_create();
    if (all->bird_x > 1920) {
        all->bird_x = -150;
        all->bird_y = rand() % 880;
    }
    sfSprite_setScale(all->bird, (sfVector2f) {0.5, 0.5});
    sfSprite_setTexture(all->bird, all->texture03, sfTrue);
    sfSprite_setPosition(all->bird, (sfVector2f) {all->bird_x, all->bird_y});
    sfRenderWindow_drawSprite(all->window, all->bird, NULL);
}

void click_bird(struct_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window);
    sfFloatRect size = sfSprite_getGlobalBounds(all->bird);
    sfVector2f cord;

    cord = sfRenderWindow_mapPixelToCoords(all->window, mouse, NULL);
    if (all->event.type == sfEvtMouseButtonPressed) {
        if (cord.x <= size.left + size.width && cord.x >= size.left &&
            cord.y >= size.top && cord.y <= size.top + size.height) {
            all->bird_x = -150;
            all->bird_y = rand() % 880;
        }
    }
}
