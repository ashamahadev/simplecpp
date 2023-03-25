#include <simplecpp>
main_program
{
    turtleSim();
    cout << "How many pointed star? ";
    int points;
    int side = 100;
    cin >> points;
    double thetaAngle = 180 * (1 - 1 / (points * 1.0));
    repeat(points)
    {
        forward(side);
        right(thetaAngle);
        forward(side);
        wait(0.5);
    }
    wait(5);
}