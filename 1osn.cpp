#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int k,a,b,N = 0,t,i = 1;
	while(i!=31)
    {
        if(i % 2 == 0)
        {
            a = i / 2;
            b = i*i*i;
        }
        else
        {
            a = i;
            b = i*i;
        }
        N+=pow((a-b),2);
        i++;
    }

    cout<<"N="<<N;
}
