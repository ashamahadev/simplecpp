#include <simplecpp>
main_program
{
    double x=1, a, n, term, sum;
    cout << "degree of equation?: ";
    cin >> n;
    cout<<"value of x: ";
    cin>>x;
    term = 1;
    cout << "give a a0: ";
    cin >> a;
    sum += term * a;
    for (int i = 1; i <= n; i++)
    {
        cout << " give a" << i << ": ";
        cin >> a;
        term = term * x;
        sum += term * a;
    }
    cout << sum << endl;
}