#include<simplecpp>
main_program{
    turtleSim();
    int sides=20,length=30;
    double angle=360/sides;
    // one circle
    repeat(sides){
    forward(length); right(angle); wait(0.01);
    }
    wait(1);
    repeat(sides){
        forward(length); left(angle); wait(0.01);
    }

    // // go to lower middle
    // penUp();
    // repeat(sides/2){
    // forward(length);right(angle);
    // }
    // penDown();
    // wait(1);
    // repeat(sides){
    //     forward(length); left(angle); wait(0.01);
    // }

    wait(5);
}