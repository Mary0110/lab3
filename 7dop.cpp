#include <iostream>
#include <cmath>  //10 вар


using namespace std;

int main()
{
    int number;
    bool check_sum(int number);
    cout<<"Enter natural number"<<endl;
    cin>>number;

    if (check_sum(number))
        cout << "possible";
    else
        cout << "impossible";
}


bool check_sum(int number)
{
    for ( long i = 1; i * i <= number; i++)
        for (long j = 1; j * j <= number; j++)
            if (i * i + j * j == number)
            {
                cout <<number<<" = "<< i << "^2 + "<< j << "^2\n";
                return true;
            }
    return false;
}
