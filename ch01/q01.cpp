#include<simplecpp>
main_program{
    double length, sides;
    cout<<"No of Sides: ";
    cin>>sides;
    cout<<"Length of Sides: ";
    cin>>length;
    double angle = 360.0/sides;
    turtleSim();
    repeat(sides){
    forward(length); right(angle);
    }
    wait(5);
    
}