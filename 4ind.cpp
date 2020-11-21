//--------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;

double factr(int m)
{
    int mult = 1;
    for (int i = 1; i <= m ; i++)
    {
        mult *= i;
    }
    return mult;
}

double get_x()
{
    while (true)
    {
        cout << "Enter x (0.1<=x<=1)\n";
        double x;
        cin >> x;

        if (x>=0.1 && x<=1)
            return x;

        else
            cout << "Try again\n";
    }
}

int main()
{
    int Num;
    cout << "Enter the number of members\n"; //количество членов ряда
    cin >> Num;

    int amount;
    cout << "Enter the number of numbers\n"; //количество чисел
    cin >> amount;
    double row = 0;
    for (int l = 0; l < amount; l++)
    {

        double get_x();
        double x = get_x();

        for(int i = 0; i <= Num; i++)
        {
            int fact = factr(2*i+1);
            double mr = pow(x, 2*i+1) / fact; //member of row
            row+=mr;
        }
        double funct = (exp(x)-exp(-x)) * 0.5;

        cout<<l+1<<"\tS(x)="<<row<<"\tY(x)="<<funct<<endl;  //S-ряд Y-функция
    }
}
