//--------------------------------------------------------------------
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    int M = 20;
    double pi = 3.1415, B = pi/2, A  = 0;
    double H = (B-A)/M;

    for(int i = 0; i < M; i++)
        {
            double x = A + i * H;
            double y = sin(x) - cos(x);
            printf("%i\tx=%f\t  y=%f\n", i+1,x,y);
        }
    return 0;
}
