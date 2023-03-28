#include <simplecpp>
main_program
{
    int number, q, r, res = 0, mul = 1;
    cout << "number";
    cin >> number;
    repeat(r == 1)
    {
        q = (number / 2);
        r = (number % 2);
        res = r * mul + res;
        mul = mul * pow(10, 0);
        
    }
    cout << mul;
}
