#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 0;
    double root, parts, y1=1, y=0;
    double e = 2.718281828459;

    cout<<"Enter the number of parts:"<<endl;  //�� ������� ������ ������� ������� ������
    cin>>parts;

    double step = 2. / parts;  //��������� ���

    for(double x = 1; x <= 3; x+=step)
    {
        y = acos(pow(e, -x)) - 2 * sin(x);
        double absy = abs(y);
        root = y1 < absy ? root : x ;
        y1 = absy;                 //���� ���������� ��������
    }
    cout<<"Root = "<<root;
    return 0;
}
