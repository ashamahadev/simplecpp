#include <simplecpp>
main_program
{
    turtleSim();
    repeat(10)
    {
        repeat(4)
        {
            forward(20);
            right(90);
            wait(0.25);
        }
        penUp(); forward(20);
        penDown();
    }
    wait(5);
}