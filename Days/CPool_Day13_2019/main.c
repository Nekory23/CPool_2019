/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** csfml
*/

#include <SFML/Graphics/RenderWindow.h> 

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {800, 600, 32};

//    autre facon de declarer les variables : 
//    video_mode.width = 800;
//    video_mode.height = 600;
//    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "Window", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return(0);
}
