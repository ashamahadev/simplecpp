// Write a program to ompute the value of
// In identally, D(r) is the number of ways in whi h the numbers 1 through r an be
// arranged in a sequen e su h that i is never in the ith position, for all i.
#include <simplecpp>
main_program
{

    int sum = 0, i, term = 1, r; // 4
    cout << "give one value";
    cin >> r;
    // manually calc 1st term
    for (int i = r; i >= 1; i--) //
    {
        term = i * term;
    }
    sum +=term;
    for (i = 1; i <= r; i++)
    {//24,
        term = (-1)*term/i;
        sum += term;
    }

    cout << sum<< endl;
}