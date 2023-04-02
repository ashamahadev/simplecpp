/*
*Write a program that takes as input the coordinates of two points in the plane and
prints out the distance between them
*/

#include <simplecpp>
main_program
{
    cout << " enter two points";
    int x1= 0;
    int y1= 0;
    int x2=0;
    int y2=0;
    int distance = 0;
    cin >> x1 >> y1>>x2>>y2;
    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout << " distance between two points " << distance;
}