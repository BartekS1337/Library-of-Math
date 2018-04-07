#include <iostream>
#include"mymath.h"
using namespace std;

int main()
{
    int n, k , n2, a, b, ax, ay, bx, by, cx, cy;
    double height, ray;


    //fibonacci
    cout<<"input number n"<<endl;
    cin>>n;
    cout<<"the "<<n<<"th number of Fibonacci sequence is:"<<fibonacci(n)<<endl;

    //power
    cout<<"input your base to power"<<endl;
    cin>>k;
    cout<<"input your index to power"<<endl;
    cin>>n2;
    cout<<"power of "<<k<<"^"<<n<<" ="<<power(k,n2)<<endl;

    //nwd
    cout<<"input first number"<<endl;
    cin>>a;
    cout<<"input second number"<<endl;
    cin>>b;
    cout<<"The biggest common factor of "<<a<<" and "<<b<<" is "<< NWD(a,b)<<endl;

    //fieldofcylinder
    cout<<"To calculate the field of cylinder input height"<<endl;
    cin>>height;
    cout<<"input ray"<<endl;
    cin>>ray;
    cout<<"Field of this cylinder = "<<cylinderfield(height, ray)<<endl;

    //Trianglemaker
    cout<<"to calculate field of triangle input the coordinates(x,y) of node A"<<endl;
    cin>>ax>>ay;
    cout<<"input the coordinates(x,y) of node B"<<endl;
    cin>>bx>>by;
    cout<<"input the coordinates(x,y) of node C"<<endl;
    cin>>cx>>cy;
    cout<<"the field of your triangle is "<<trianglemaker(ax,ay,bx,by,cx,cy)<<endl;

    return 0;
}
