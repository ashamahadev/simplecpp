#include <simplecpp>
main_program
{
    double sh=0.2, lng=10;
    turtleSim();
    int i = 0;
    repeat(30)
    {
        left(90); wait(sh);
        forward(200 * sine(i * 10)); wait(sh);
        forward(-200 * sine(i * 10)); wait(sh);
        right(90); wait(sh);
        forward(10); wait(sh);
        i++;
    }
    wait(lng);
}