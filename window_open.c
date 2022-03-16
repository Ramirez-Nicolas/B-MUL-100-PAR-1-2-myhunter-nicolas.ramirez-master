/*
** EPITECH PROJECT, 2020
** window_open.c
** File description:
** open a window
*/

#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <stdio.h>            
#include "./include/my.h"

/*sfRenderWindow *createwindow(unsigned int widht, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfMouseMoveEvent mouse;

    video_mode.width = widht;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "Duck Hunt", sfDefaultStyle, NULL);
}

void close_window(sfRenderWindow *window)
{
    sfEvent event;

    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void move_rect(sfIntRect *test, sfIntRect *rect2, sfIntRect *rect3)
{
    test->left += 40;
    if (test->left > 80)
        test->left = 0;
    rect2->left += 32;
    if (rect2->left > 32)
        rect2->left = 32;
    rect3->left += 32;
    if (rect3->left > 32)
        rect3->left = 32;
}

void move_rect6(sfIntRect *rect6)
{
    rect6->left += 60;
    if (rect6->left > 120)
        rect6->left = 120;
}

void epitech(sfSprite *sprite2, sfVector2f vector)
{
    sfSprite_setPosition(sprite2, vector);
}
*/

int main(void)
{
    // Variables
    sfRenderWindow *window;
    sfMouseMoveEvent mouse;
    sfMouseMoveEvent mouse4;
    sfColor sfBlue = sfColor_fromRGB(0, 200, 255);
    sfBool resetRect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfEvent event;
    sfTexture *texture;
    sfTexture *texture2;
    sfTexture *texture3;
    sfTexture *texture4;
    sfTexture *texture5;
    sfTexture *texture6;
    sfSprite *sprite;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
    sfSprite *sprite5;
    sfSprite *sprite6;
    sfIntRect rect;
    sfIntRect rect2;
    sfIntRect rect3;
    sfIntRect rect5;
    sfIntRect rect6;
    sfVector2f dog = sfSprite_getPosition(sprite5);
    sfVector2f bird = {450, 1000};

    //informations, creations, etc.
    window = createwindow(1920, 1080);
    rect.top = 155;
    rect.left = 0;
    rect.width = 40;
    rect.height = 40;
    rect2.top = 240;
    rect2.left = 0;
    rect2.width = 40;
    rect2.height = 27;
    rect3.top = 240;
    rect3.left = 32;
    rect3.width = 40;
    rect3.height = 27;
    rect5.top = 0;
    rect5.left = 60;
    rect5.width = 60;
    rect5.height = 45;
    rect6.top = 60;
    rect6.left = 0;
    rect6.width = 60;
    rect6.height = 45;
    texture = sfTexture_createFromFile("./image/duck.png", NULL);
    texture2 = sfTexture_createFromFile("./image/duck.png", NULL);
    texture3 = sfTexture_createFromFile("./image/duck.png", NULL);
    texture4 = sfTexture_createFromFile("./image/Background2.png", NULL);
    texture5 = sfTexture_createFromFile("./image/duck.png", NULL);
    texture6 = sfTexture_createFromFile("./image/duck.png", NULL);
    sprite = sfSprite_create();
    sprite2 = sfSprite_create();
    sprite3 = sfSprite_create();
    sprite4 = sfSprite_create();
    sprite5 = sfSprite_create();
    sprite6 = sfSprite_create();
    //sfSprite_setPosition(sprite, bird);
    //sfSprite_setPosition(sprite1, (sfVector2f) {200, 200});
    sfSprite_setPosition(sprite2, (sfVector2f) {200, -1000});
    sfSprite_setPosition(sprite3, (sfVector2f) {50, 300});
    sfSprite_setPosition(sprite4, (sfVector2f) {0, 100});
    sfSprite_setPosition(sprite5, (sfVector2f) {-50, 860});
    sfSprite_setPosition(sprite6, (sfVector2f) {880, 830});
    epitech(sprite, bird);
    sfSprite_setScale(sprite, (sfVector2f) {2, 2});
    sfSprite_setScale(sprite2, (sfVector2f) {2, 2});
    sfSprite_setScale(sprite3, (sfVector2f) {2, 2});
    sfSprite_setScale(sprite4, (sfVector2f) {1.5, 1.5});
    sfSprite_setScale(sprite5, (sfVector2f) {3, 3});
    sfSprite_setScale(sprite6, (sfVector2f) {3, 3});
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setTexture(sprite2, texture2, sfFalse);
    sfSprite_setTexture(sprite3, texture3, sfFalse);
    sfSprite_setTexture(sprite4, texture4, sfFalse);
    sfSprite_setTexture(sprite5, texture5, sfFalse);
    sfSprite_setTexture(sprite6, texture6, sfFalse);
    clock = sfClock_create();
    // Window
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            close_window(window);
        }
        sfRenderWindow_clear(window, sfBlue);
        // sprite per seconds
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000.0;
        if (seconds > 1.0)
        {
            if (sprite5 != NULL)
                sfSprite_setTextureRect(sprite5, rect5);
            if (sprite5 == NULL) {
                move_rect6(&rect6);
                sfSprite_setTextureRect(sprite6, rect6);
            }
            move_rect(&rect, &rect2, &rect3);
            sfSprite_setTextureRect(sprite, rect);
            sfSprite_setTextureRect(sprite2, rect2);
            sfSprite_setTextureRect(sprite3, rect3);
            sfClock_restart(clock);
        }
        //move(x, y) sprites
        sfSprite_move(sprite, (sfVector2f) {0.5, -0.5});
        sfSprite_move(sprite2, (sfVector2f) {0, 1});
        sfSprite_move(sprite3, (sfVector2f) {0, 1});
        //draw sprite
        sfRenderWindow_drawSprite(window, sprite4, NULL);
        if (sprite5 != NULL) {
            rect5.left += 60;
            if (rect5.left > 240)
                rect5.left = 0;
            sfSprite_move(sprite5, (sfVector2f) {1, 0});
            dog = sfSprite_getPosition(sprite5);
            if (dog.x == 880 && dog.y == 860) {
                sfSprite_destroy(sprite5);
                sprite5 = NULL;
                sfTexture_destroy(texture5);
            }
        } else {
            sfRenderWindow_drawSprite(window, sprite6, NULL);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            sfRenderWindow_drawSprite(window, sprite2, NULL);
            sfRenderWindow_drawSprite(window, sprite3, NULL);
        }
        if (sprite5 != NULL)
            sfRenderWindow_drawSprite(window, sprite5, NULL);
        if (event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_clear(window, sfWhite);
        }
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite);
    sfSprite_destroy(sprite2);
    sfSprite_destroy(sprite3);
    sfSprite_destroy(sprite4);
    sfTexture_destroy(texture);
    sfTexture_destroy(texture2);
    sfTexture_destroy(texture3);
    sfTexture_destroy(texture4);
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
    return (0);
}
