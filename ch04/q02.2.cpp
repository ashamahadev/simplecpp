#include <simplecpp>
main_program
{
    int n;
    cout << "Enter number of terms to evaluate 2/pi : ";
    cin >> n;
    double term, result = 1.0;
    repeat(n)
    {
        term = sqrt(2 + term);
        result = result * term * 0.5;
    }
    cout << "Value of 2/pi for " << n << " terms is : " << result << endl;
    cout << "Value of 2/pi using pi=3.14159265 is : " << 2.0 / 3.14159265 << endl;
}