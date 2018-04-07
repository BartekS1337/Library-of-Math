#include<iostream>
#include <cmath>
using namespace std;

int kineticenergy(double mass, double road, double time)
{
    double speed;
    double kenergy;

    speed = road/time;


    kenergy = (mass * (speed*speed))/2;

    return kenergy;

}

int trianglemaker(int Ax, int Ay, int Bx, int By, int Cx, int Cy)
{
    double field;
    field=0.5 *fabs(((Bx-Ax)*(Cy-Ay))-((By-Ay)*(Cx-Ax)));

    return field;
}

int power(int k, int n)// k^n
{
    int number=1;
    for(int i=0;i<n;i++)
    {
        number*=k;
    }
    return number;
}

int NWD(int firstnumber, int secondnumber)
{
    while(firstnumber!=secondnumber)
    {
        if(firstnumber>secondnumber)
            firstnumber=firstnumber-secondnumber;

        if(secondnumber>firstnumber)
            secondnumber=secondnumber-firstnumber;
    }
    return firstnumber;

}
int fibonacci(int number)
{
    if(number<=2)
        return 1;
    return
        fibonacci(number-2)+fibonacci(number-1);
}


