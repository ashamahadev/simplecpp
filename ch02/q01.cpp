#include <simplecpp>
main_program
{
    int number=0, q=0, r=0, res = 0, mul = 1;
    cout << "Number : ";
    cin >> number;
    while(true)
    {
        q = (number / 2);
        r = (number % 2);
        res = r * mul + res;
        printf("q=%d, r=%d, mul=%d, res=%d", q, r, mul, res);
        mul = mul * 10;
        number = q;
        printf(",   next mul=%d, next number=%d\n", mul,r);
        if(q<1) break;
    }
    cout << "Binary of "<<number<<" is "<<res<< endl;
}
