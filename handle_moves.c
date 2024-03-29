#include "so_long.h"

int key_handler(int keycode, t_vars *vars)
{
    if (keycode == KEY_ARROW_RIGHT)
        vars->player.pos.x += 1;
    else if (keycode == KEY_ARROW_LEFT)
        vars->player.pos.x -= 1;
    else if (keycode == KEY_ARROW_UP)
        vars->player.pos.y -= 1;
    else if (keycode == KEY_ARROW_DOWN)
        vars->player.pos.y += 1;
    return (0);
}
