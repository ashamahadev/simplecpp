#include <simplecpp>
main_program{
    turtleSim();
    int length=100,sides=7;
    double angle=360/sides;
    repeat(sides){
        forward(length);right(angle);

    }
    wait(5);
}