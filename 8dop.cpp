#include <iostream>
#include <cmath>   //1 ���

using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter number\n";
    cin >> number;

    for(int n = 1; n < number; n++)
    {
        if (number % n == 0)
        {
            sum += n;       //����� ������� ��������� �����

        }
    }
    if ( sum == number)
    {
        cout<<"Number "<<number<<" is perfect";
    }
    else
    {
        cout<<"Number "<<number<<" isn't perfect";
    }
}
