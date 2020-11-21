#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 0;
    double root, parts, y1=1, y=0;
    double e = 2.718281828459;

    cout<<"Enter the number of parts:"<<endl;  //на сколько частей разбить область поиска
    cin>>parts;

    double step = 2. / parts;  //вычислить шаг

    for(double x = 1; x <= 3; x+=step)
    {
        y = acos(pow(e, -x)) - 2 * sin(x);
        double absy = abs(y);
        root = y1 < absy ? root : x ;
        y1 = absy;                 //фикс предыдущее значение
    }
    cout<<"Root = "<<root;
    return 0;
}
