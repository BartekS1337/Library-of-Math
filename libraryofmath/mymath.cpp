#include<iostream>
#include <cmath>
using namespace std;

int silniamaker(int number)
{
    long long int silnia=1;
    for(long long int i=1;i<=number;i++)
        {
            silnia=silnia*i;
        }

        return silnia;
}

int trianglemaker(int Ax, int Ay, int Bx, int By, int Cx, int Cy)
{
    double pole;
    pole=0.5 *fabs(((Bx-Ax)*(Cy-Ay))-((By-Ay)*(Cx-Ax)));

    return pole;
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


