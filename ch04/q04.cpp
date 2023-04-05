#include <simplecpp>
main_program
{
    double e=2.718281828, x=0, term=1, sum = 1;
    cout << "give a x value: ";
    cin >> x;

    for (int i =1; i <= 14; i++) {
        term = term*x / i;
        sum += term;
        //cout <<"term:"<<term<<", sum="<<sum<<", i:"<<i<<endl;
    }
    double expected = pow(e,x);

    cout << "actual " << sum << " expected: " << expected <<", ERROR: "<< sum-expected << endl;
}