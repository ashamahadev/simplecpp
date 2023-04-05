#include <simplecpp>
main_program
{
    initCanvas("Projectile motion", 500, 500);
    int start = getClick();
    Circle projectile(start / 65536, start % 65536, 5);
    projectile.penDown();
    double vx = 1, vy = -5, gravity = 0.1;
    repeat(100)
    {
        projectile.move(vx, vy);
        vy += gravity;
        wait(0.1);
    }
}