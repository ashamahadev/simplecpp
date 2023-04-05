#include <simplecpp>
main_program
{
    double term, prod=1;
    int n;
    cout << "give a number: ";
    cin >> n;
    term = sqrt(2); // 1st term
    prod *= term*0.5;
    for (int i = 2; i <= n; i++)
    {

        term = sqrt(term + 2);
        prod *= term*0.5;
    }
    double expected = (2.0*7.0)/22.0;
    cout<<"Expected: "<<expected<<", Actual: "<<prod<<", Error: "<<expected-prod<<endl;
}