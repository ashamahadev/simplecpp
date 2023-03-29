#include <simplecpp>
main_program
{

    int input, inches, feet, yards, furlongs, miles;
    cout<<"enter length in inches : "; cin >> input;
    inches=input%12;
    feet=input/12;
    if(feet>3){
        yards=feet/3;
        feet=feet%3;
    }
    if(yards>220){
        furlongs=yards/220;
        yards=yards%220;
    }
    if(furlongs>8){
        miles=furlongs/8;
        furlongs=furlongs%8;
    }
    cout<<miles<<" miles "<<furlongs<<" furlongs "<<yards<<" yards "<<feet<<" feet "<<inches<< " inches";
    if(furlongs<8 && yards<220 && feet<3 && inches<12){
        cout<<"--PASSED--";
    } else {
        cout<<"--!!CHECK FAILED!!--";
    }
}