#include <simplecpp>
main_program
{
    turtleSim();
    penUp(); forward(-100); penDown();
    int l = 30;
    repeat(36){
    forward(l);
    repeat(270)
    {
        forward(0.1);
        right(1);
    }
    forward(l);
    repeat(260){
    {
        forward(0.1);
        left(1);
    }
    }
    }
    wait(5);
}