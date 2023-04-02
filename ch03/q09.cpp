#include <simplecpp>
/**
Write a program which reads in side, nsquares, q. It should draw nsquares as many
squares, all with the same enter. The sidelength should increase by q starting at side.
Repeat with the modification that the sidelength should increase by a factor q.
*/
main_program
{
    
    int side, nsquares, q, sideLength = 100;
    cout << " give values for side,nsquares,q";
    cin >> side >> nsquares >> q;
    turtleSim();
    repeat(nsquares)
    {
        repeat(4)
        {
            forward(side);
            right(90);
        }
        left(135);penUp();
        forward(sqrt(2) * q / 2.0);penDown();
        right(135);
        side = side + q;
        wait(0.5);
    }
    wait(5);
    
}