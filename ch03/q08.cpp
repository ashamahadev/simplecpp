/**
 * Write a program that prints out the geometri sequen e a; ar; ar ; : : : ; arn, taking a; r; n
as input.
*/
#include <simplecpp>
main_program
{
    int a, r, i = 1, res,n;
    cout << " Enter a values of a, r,n ";
    cin >> a>>r>>n;
    cout<<a<<", ";
    repeat(n-1)
    {
        res = a *pow(r,i);
        i=i+1;
        cout<<res;
        if(i>n-1){
            cout<<endl;
        }else{
            cout<<" , ";
        }
    }

}