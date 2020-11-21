#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double e = 0.001,sum = 0, d;
	double  n = 1;

    do{
        d = pow((1/2),n)+pow((1/3), n);
        sum+=d;
        n++;
    }while(d > e);

    cout<<"sum="<<sum;
    return 0;
}
