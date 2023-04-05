// Write a program which multiplies an n digit number M by a 1 digit number d, where
// n ould be large, e.g. 1000. The input will be given as follows. First the user gives
// d, then n and then the digits of M , starting from the least significant to the most
// significant. The program must print out the digits of the product one at a time, from
// the least signi ant to the most significant.
// The program you write will likely perform about n multipli ation operations and a
// similar number of other operations. There is a more efficient way of writing this
// program, i.e. using fewer operations for multiplying the same numbers M; d. Hint:
// Ask the user to give several digits of M at a time.
#include <simplecpp>
main_program
{
    int n = 0, d = 0, M = 0, prod = 1, carrier = 0, remainder = 0, mul = 1;
    unsigned long long int sum = 0;
    cout << "enter a d value: ";
    cin >> d;
    cout << "give a n in large number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << " enter digit" << i << ": ";
        cin >> M;
        prod = M * d + carrier;
        carrier = prod / 10;
        remainder = prod % 10;
        sum += mul * remainder;
        mul = mul * 10;
        cout << "digit " << i << " of result:" << remainder << endl;
    }
    if (carrier > 0){
        sum += carrier * mul;
        cout << "digit " << n+1 << " of result:" << carrier << endl;
    }
}
// 9606432305 5032346069
