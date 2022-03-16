/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my_h
*/

#ifndef MY_H
#define MY_H

sfRenderWindow *createwindow(unsigned int widht, unsigned int height);
void close_window(sfRenderWindow *window);
void move_rect(sfIntRect *test, sfIntRect *rect2, sfIntRect *rect3);
void move_rect6(sfIntRect *rect6);
void epitech(sfSprite *sprite2, sfVector2f vector);
    
#endif /* MY_H */
