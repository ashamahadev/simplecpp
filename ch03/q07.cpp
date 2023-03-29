#include <simplecpp>
main_program
{

    double a, d, i = 0, n, res;
    cout << "enter a, d and n: ";
    cin >> a >> d >> n;
    cout<<"AP of "<<a<<" with common distance "<<d<<" for "<<n<<" terms is :"<<endl;
    repeat(n)
    { // 1
        res = a + i*d;
        i = i + 1;
        cout<<res;
        // cout <<" i : "<<i<< " a : " << a << " res : " << res << endl;
        if(i>n-1){
            cout<<endl;
        }else{
            cout<<", ";
        }
    }
}