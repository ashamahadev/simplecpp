#include <simplecpp>
main_program
{
    double a, b, c;
    cout << "Enter the sides";
    cin >> a >> b >> c;
    double C = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b));
    double A = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * c * b));
    double B = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
    turtleSim();
    forward(a);
    right(180 - C);
    forward(b);
    right(180 - A);
    forward(c);
    right(180 - B);
    wait(5);
}