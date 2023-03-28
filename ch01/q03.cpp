#include <simplecpp>
main_program
{
    turtleSim();
    repeat(8){
    repeat(8)
    {
        repeat(4)
        {
            forward(20);
            right(90);
            wait(0.1);
        }
        penUp(); forward(20);
        penDown();
        wait(0.25);
    }
    penUp();forward(-160);right(90);forward(20);left(90);
    penDown();
    wait(0.25);
    }
  
}