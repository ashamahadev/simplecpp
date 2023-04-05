#include <simplecpp>
main_program
{
    double x=0, a=0, n=0, term=1, sum = 0;
    cout << "give a degree of equation: ";
    cin >> n;
    cout << " value of x: ";
    cin >> x;
    // cout << " give a a: ";
    // cin >> a;
    // calc x^n
     
    for (int i = 1; i <= n; i++)
    {
        term = term * x;
        cout << term <<endl;
    }
    cout << " give a"<<n<<": ";
    cin>>a;
    sum = a * term;
    cout<<sum<<term;
    for (int i = n-1; i >= 0; i--)
    {

        cout << " give a"<<i<<": ";
        cin>>a;
        term = (term / x);
        sum += term*a;
        cout<<sum<<term;
    }

    cout<<"sum: "<<sum<<endl;
}