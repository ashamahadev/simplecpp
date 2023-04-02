/** a = r * sin(theta) 
 * length = radius * sin(1)
 */
#include <simplecpp>
main_program
{
    turtleSim();
    double length = 0.1, angle = 1;

    repeat(10)
        repeat(360)
    {
        forward(length);
        length=length+0.001;
        right(angle);
    }
    
    wait(3);
}

