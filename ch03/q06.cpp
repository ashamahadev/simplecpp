#include <simplecpp>
main_program
{
    turtleSim();
    double smallWait = 0.5;
    int i = 1;
    repeat(10)
    {
        cout<<"i at start "<<i;
        cout<<"Executing forward with value "<<i*10<<endl;
        forward(i * 10); wait(smallWait);
        cout<<"Executing right with value "<<90<<endl;
        right(90); wait(smallWait);
        cout<<"Executing forward with value "<<i*10<<endl;
        forward(i * 10); wait(smallWait);
        cout<<"Executing right with value "<<90<<endl;
        right(90); wait(smallWait);
        cout<<"Incrementing i  "<<endl;
        i = i + 1; wait(smallWait);
        wait(1);
        cout<<",  i at end "<<i<<endl;
    }
    wait(5);
}

