/** For example, if the user typed '1','2', then p,q
 * will contain the values 49,50. At the end we would
 *  like dig1,dig2,n to be respe tively 1,2,12.
 */

#include <simplecpp>
main_program
{
    char p, q;
    cout << "enter two numbers 1 to 2";
    int dig1, dig2, n;
    cin >> p >> q;
    // equivalent to
    dig1 = p - 48;

    dig2 = q - 48;

    n = (dig1 * 10) + (dig2 * 1);

    cout << dig1 << "," << dig2 << "," << n<<endl;
}