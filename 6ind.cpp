#include <iostream>
#include <cmath>            //1 вариант

using namespace std;

int main()
{
    double x = 1, h = 0.1, y;

    for(double x = 1; x <= 1.6; x+=h)
    {
        y = log(x);
        cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
    }
}
