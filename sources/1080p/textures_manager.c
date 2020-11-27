/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-florian.gibault
** File description:
** textures_manager
*/

#include "../include/my_hunter.h"

sfSprite *get_sprite(sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

void load_textures(struct game *params)
{
    load_textures_one(params);
    load_textures_two(params);
    load_scoreboard(params);
}

void load_textures_one(struct game *params)
{
    params->lego = initialize_lego();
    params->title = initialize_title();
    params->title->sprite = get_sprite(\
sfTexture_createFromFile("pics/title_sheet.png", NULL));
    params->lego->sprite = get_sprite(\
sfTexture_createFromFile("pics/yellow_sheet.png", NULL));
    params->play = get_sprite(sfTexture_createFromFile("pics/play.png", NULL));
    params->game_over = get_sprite(\
sfTexture_createFromFile("pics/game_over.png", NULL));
    params->restart = get_sprite(\
sfTexture_createFromFile("pics/restart.png", NULL));
    params->exit = get_sprite(\
sfTexture_createFromFile("pics/exit.png", NULL));
    params->menu_background = get_sprite(\
sfTexture_createFromFile("pics/menu_background.png", NULL));
    params->background = get_sprite(\
sfTexture_createFromFile("pics/background.png", NULL));
}

void load_textures_two(struct game *params)
{
    params->target = get_sprite(\
sfTexture_createFromFile("pics/target.png", NULL));
    params->settings = get_sprite(\
sfTexture_createFromFile("pics/settings.png", NULL));
    params->res_fhd = get_sprite(\
sfTexture_createFromFile("pics/1080.png", NULL));
    params->res_hd = get_sprite(\
sfTexture_createFromFile("pics/720.png", NULL));
    params->res_sd = get_sprite(\
sfTexture_createFromFile("pics/480.png", NULL));
    params->font_armada = sfFont_createFromFile("pics/astroarmada.ttf");
}