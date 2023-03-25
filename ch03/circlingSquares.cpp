#include <simplecpp>
main_program
{
    turtleSim();
    repeat(10)
    {
        repeat(4)
        {
            forward(100);
            right(90);
            wait(0.5);
        }
        right(22);
    }
    wait(10);
}