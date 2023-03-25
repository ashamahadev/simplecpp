#include <simplecpp>
main_program
{
    turtleSim();
    double innerSide = sqrt(2 * 50 * 50);
    cout<<innerSide;
    // Draw bigger circle
    repeat(4)
    {
        forward(100);
        right(90);
        wait(0.5);
    }
    // Come to starting point of inner circle
    forward(100 / 2);
    right(45);
    // Draw inner square
    repeat(4)
    {
        forward(innerSide);
        right(90);
        wait(0.5);
    }

    wait(5);
}