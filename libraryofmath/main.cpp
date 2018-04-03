#include <iostream>
#include"mymath.h"
using namespace std;

int main()
{
    cout << fibonacci(6)<< endl; // 8
    cout << power(3,3)<< endl; // 27
    cout << NWD(16,24)<< endl; // 8
    cout << factorial(7)<< endl; // 5040
    cout << trianglemaker(1,-3,3,3,-3,5)<< endl; // 20 
    
    return 0;
}
