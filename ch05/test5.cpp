#include<simplecpp>
main_program{
    initCanvas();
    double t=0.5;
    Turtle t1, t2, t3;
    t2.left(120);wait(t);
    t3.left(240);wait(t);
    repeat(8)
    {
        t1.forward(100); wait(t);
        t2.forward(100);wait(t);
        t3.forward(100);wait(t);
        t1.left(360.0 / 8);wait(t);
        t2.left(360.0 / 8);wait(t);
        t3.left(360.0 / 8);wait(t);
    }
    wait(5);
}
